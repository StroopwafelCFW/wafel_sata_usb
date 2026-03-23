# wafel_sata_usb

This plugin for [stroopwafel](https://github.com/shinyquagsire23/stroopwafel) changes the type of a internal SATA connected HDD / SSD to the USB Type instead of MLC, so the Wii U allows you to store games on it, while the system still runs from the eMMC.
It uses the MLC key for the SATA HDD, so it can be easily switched between acting as MLC and USB.

## How to use

- Copy the `5satausb.ipx` to `/wiiu/ios_plugins`


## Building

```bash
export STROOPWAFEL_ROOT=/path/too/stroopwafel-repo
make
```


## Thanks

- [shinyquagsire23](https://github.com/shinyquagsire23)
- [GaryOrderNichts](https://github.com/GaryOderNichts) 
- [Maschell](https://github.com/Maschell)
