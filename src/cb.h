/**
 * clip - A simple copy and paste utility for the terminal
 *
 * @author  Matthew Cross <blacklightgfx@gmail.com>
 * @package clip
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* consoleclip = "/tmp/clipboard.tmp";
FILE *fcc;
char buf[1024];
