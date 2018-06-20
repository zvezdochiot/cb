Console clipboard [copy/file/paste] (https://github.com/zvezdochiot/cb)
===================================

An easy to way to perform copy & paste operations in the terminal.

Copy and paste using `stdin/stdout`

```sh
# Copy a single line
cbc "This is some data"

# Copy lots of data
cat ./sample.txt | cbf -

# Copy a single file
cbf sample.txt

# Now its time to paste the data...

# Using stdout
cbp

# Send clipboard data to file
cbp > output.txt
```

Building clip is very simple. Just use the predefined `Makefile`

```sh
# Compile all the sources.
make

# To install the application globally run
[sudo] make install
```

This will generate an executable called `cbc`, `cbf` and `cbp`  in the working directory.

