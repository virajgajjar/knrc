# knrc

[![linux-build](https://github.com/virajgajjar/knrc/actions/workflows/main.yml/badge.svg)](https://github.com/virajgajjar/knrc/actions/workflows/main.yml)

Solutions to all the exercises from "The C Programming Language - 2nd Edition" by K&R.

:heavy_exclamation_mark: **Each solution will only use concepts that have been taught upto that point in the book.**

:heavy_exclamation_mark: **So, some solutions may look clumsy to an experienced programmer.**

:warning: **Work in progress**

## Usage
To compile and run a solution, navigate to the suitable directory and run:
```console
make && ./a.out
```

You can compile all solutions at once into a top level directory called "bin".
To do so, run the following command from the top level directory:
```console
make && make install
```

To remove all the compiled objects from their directories, run the following command
from the top level directory or from a directory containing a solution:
```console
make clean
```
