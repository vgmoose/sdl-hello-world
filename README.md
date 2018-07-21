This program draws "Hello world!" on the Nintendo Switch using a bitmap font.

The main code is in [hello.c](https://github.com/vgmoose/sdl-hello-world/blob/master/hello.c).

To see another simple SDL2 program with graphics and input, see [spacenx](https://github.com/vgmoose/spacenx), or for a more complicated one [appstorenx](https://github.com/vgmoose/appstorenx)

### Compiling
#### For Switch (libtransistor)
0. You will need [llvm](https://llvm.org/) for your computer. You can probably get this through your package manger (eg. `brew install llvm`, see [here](https://reswitchedweekly.github.io/Development-Setup/#dealing-with-the-deps) for more info)

1. Setup and install [libtransistor](https://github.com/reswitched/libtransistor#installation) by downloading it from the [releases page](https://github.com/reswitched/libtransistor/releases). It is recommended to copy it to `/opt/libtransistor`.

2. Export the following environment variable to where you unpacked libtransistor. You may want to put this line in your bash profile:
```
export LIBTRANSISTOR_HOME=/opt/libtransistor
```

3. Clone, setup, and compile [sdl-libtransistor](https://github.com/reswitched/sdl-libtransistor):
```
git clone https://github.com/reswitched/sdl-libtransistor.git
cd sdl-libtransistor
make -f switch.mk
```

4. Install [pyelftools](https://pypi.org/project/pyelftools/) and [lz4](https://pypi.org/project/lz4/)via pip
```
pip3 install pyelftools lz4
```

5. Clone this repo and run make:
```
git clone https://github.com/vgmoose/sdl-hello-world.git
cd sdl-hello-world
make
```

A file `hello.nro` should be sitting in your current directory.

#### For Switch (libnx)
1. Setup and install [dkp-pacman](https://devkitpro.org/viewtopic.php?f=13&t=8702)

2. Install devkitA64 needed Switch dependencies via dkp-pacman:
```
sudo dkp-pacman -S devkitA64 libnx switch-tools switch-sdl2
```

3. Clone this repo and run make:
```
git clone https://github.com/vgmoose/sdl-hello-world.git
cd sdl-hello-world
make -f Makefile.libnx
```

A file `hello.nro` should be sitting in the `build` folder.

#### For PC
This program can also be compiled for the computer. There's no Makefile target, but with SDL2 installed:
```
gcc -lSDL2 *.c -o hello
./hello
```

### Running
You can run this program on most Switches that were released prior to June 2018 regardless of firmware. For detailed instructions, [see this post](https://gbatemp.net/threads/switch-hacking-101-how-to-launch-the-homebrew-menu-on-all-fw.504012/).

You should put the `hello.nro` file in `sd:/switch/hello.nro` and then run [hbmenu](https://github.com/switchbrew/nx-hbmenu) in order to run this app.

If you need additional resources or help, you can feel free to stop by the [Homebrew App Store discord server]( https://discord.gg/v8Vbjd6), make an issue on this repo, or contact me directly.
