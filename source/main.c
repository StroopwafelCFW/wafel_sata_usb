#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <wafel/dynamic.h>
#include <wafel/ios_dynamic.h>
#include <wafel/utils.h>
#include <wafel/patch.h>
#include <wafel/ios/svc.h>

// This fn runs before everything else in kernel mode.
// It should be used to do extremely early patches
// (ie to BSP and kernel, which launches before MCP)
// It jumps to the real IOS kernel entry on exit.
__attribute__((target("arm")))
void kern_main()
{
    // Make sure relocs worked fine and mappings are good
    debug_printf("we in here dev renamer plugin kern %p\n", kern_main);

    debug_printf("init_linking symbol at: %08x\n", wafel_find_symbol("init_linking"));

    // eMMC as renamed to usb
    //ASM_PATCH_K(0x107BDB00, "mov r3,#17");
    // don't init scfm
    //ASM_PATCH_K(0x107BD99C, "nop");

    // SATA renamed to USB
    ASM_PATCH_K(0x10786CF8, "mov r3,#17");

    // sdcard to mlc
    //ASM_PATCH_K(0x107BD87C, "mov r3,#5");

    // go mlc case even on sd
    // ASM_PATCH_K(0x107bd870, "cmp r3, r3");

    // sdcard to usb
    //ASM_PATCH_K(0x107BD87C, "mov r3,#17");

    // usb to sdcard
    // ASM_PATCH_K(0x1077EDA0, "MOV R3, #6");
}

// This fn runs before MCP's main thread, and can be used
// to perform late patches and spawn threads under MCP.
// It must return.
void mcp_main()
{

}
