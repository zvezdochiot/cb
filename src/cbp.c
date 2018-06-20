/**
 * cbp - Console clipboard paste (no X11).
 *
 * @author  zvezdochiot <zvezdochiot@github.com>
 */
#include "cb.h"

int main(int argc, char** argv)
{

	if ((fcc = fopen(consoleclip, "r")) == NULL)
    {
        printf("can't open %s\n", consoleclip);
        exit(1);
    }
    
    while (fgets(buf, 1024, fcc) != NULL)
    {
		printf("%s", buf);
	}

	fclose(fcc);
}

