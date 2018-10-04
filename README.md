# TLC59116 Led Driver for C++

Basic driver for the TLC59116 Led Driver.

## Example

Check out the examples subdir.

Making the examples:

```shell
make examples
```

You can check your dynamic loaded libraries for the executable:

```shell
ldd <executable>
TODO
```

## Dependencies

* [I2c End Point](https://github.com/BioBoost/i2c_endpoint_cpp.git)

## Compilation and installation

Just do the make

```shell
sudo su
cd /usr/local/src
git clone https://github.com/BioBoost/tlc59116_led_driver_cpp.git
cd tlc59116_led_driver_cpp
make
sudo make install
```

## More info on Compilation

Checkout http://www.yolinux.com/TUTORIALS/LibraryArchives-StaticAndDynamic.html
