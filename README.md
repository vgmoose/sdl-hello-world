This program draws "Hello world!" on the Nintendo Switch using a bitmap font.

The main code is in [hello.c](https://github.com/vgmoose/sdl-hello-world/blob/master/hello.c)

### Compiling
#### For Switch
Clone and setup libtransistor, for more detail [see this post](https://reswitchedweekly.github.io/Development-Setup/).
```
git clone --recursive -b graphics-experimental-fs https://github.com/reswitched/libtransistor.git
cd libtransistor
make
cd ..
```

Then export an environment variable pointing to your libtransistor build, and run `make`:
```
export LIBTRANSISTOR_HOME=./libtransistor
make
```
#### For PC
This program can also be compiled for the computer. There's no Makefile target, but with SDL2 installed:
```
gcc -lSDL2 *.c -o hello
```

### Running
The below instructions are for 3.0.0, written on 12/30/2017:

Build ace_loader in `./projects/ace_loader` of libtransistor, by running `make`

Copy the built `ace.nro` into Pegaswitch's `nros` directory (overwrite the existing one)

Run [Pegaswitch](https://github.com/reswitched/pegaswitch) on your computer, and set your Switch's DNS server to your computer's.

Once pegaswitch connects, run ace_loader with `runnro nros/ace.nro`. If this is your first time running Pegaswitch, use `evalfile usefulscripts/SetupNew.js` first.

If successful, the Switch should be back at the Wifi menu, and frozen. From here:
```
nc <SWITCHIP> 2991 < hello.nro
```

Where `<SWITCHIP>` is the IP of your switch.

See [here](https://github.com/reswitched/pegaswitch#usage) for more on Pegaswitch, and [here](https://github.com/reswitched/libtransistor) on ace_loader.

[See this post](https://reswitchedweekly.github.io/Development-Setup/) for more troubleshooting
