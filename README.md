# biginning
### it makes letters big
really, it's what it says on the can.

## Downloading
just clone the repo, or download and unzip the source code:
```bash
~ $ git clone https://github.com/georgedance/biginning.git
~ $ cd biginning
```

## Building
there's a [`Makefile`](/Makefile) in the main directory, so not much is required:
```bash
~/biginning $ make
```
then you'll have the binary in the [`bin`](bin) folder. if you have the [mingw-w64](https://www.mingw-w64.org) toolchain installed, you could make a build for windows by typing:
```bash
~/biginning $ make windows
```

## Installing
if you desire to install the program, the binary can be copied to `/usr/local/bin` by typing:
```bash
~/biginning $ sudo make install
```
This should add the binary to your `$PATH`, allowing you to run it whenever and wherever.

## Running
an example of how to run the program after completing the [Downloading](##Downloading) and [Building](##Building) steps above:
```bash
~/biginning $ cd bin
~/biginning/bin $ ./biginning SAMPLE TEXT
```

if you followed the [Installing](##Installing) step above, you could run it from anywhere
```bash
/any/where $ biginning SAMPLE TEXT
```

## Usage
if you do not provide the program with any additional arguments, it will provide the following usage message:
```
biginning: more arguments required
Usage: biginning [text ...]
```
