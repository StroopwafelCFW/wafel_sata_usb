# wafel_sata_usb

This plugin for [stroopwafel](https://github.com/shinyquagsire23/stroopwafel) changes the type of a internal SATA connected HDD / SSD to the USB Type instead of MLC, so the Wii U allows you to store games on it, while the system still runs from the eMMC.

## How to use

- Copy the `wafel_payloader.ipx` to `/wiiu/ios_plugins`
- Copy the PayloadFromRPX to `sd:/wiiu/root.rpx`


## Building

```bash
export STROOPWAFEL_ROOT=/path/too/stroopwafel-repo
make
```


## Thanks

- [shinyquagsire23](https://github.com/shinyquagsire23)
- [GaryOrderNichts](https://github.com/GaryOderNichts) 
- [Maschell](https://github.com/Maschell)
