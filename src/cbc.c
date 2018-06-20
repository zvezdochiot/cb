/**
 * cbc - Console clipboard copy (no X11).
 *
 * @author  zvezdochiot <zvezdochiot@github.com>
 */
#include "cb.h"

void usage()
{
    printf("Concole clipboard copy\n\n");
    printf("Usage: cbc <copy_text>\n\n");
}

int main(int argc, char** argv) {
	int i;
    if (argc < 2) {
        usage();
        exit(0);
    }

	if ((fcc = fopen(consoleclip, "w")) == NULL)
    {
        printf("can't open %s\n", consoleclip);
        exit(1);
    }

	for (i = 1; i < argc; i++)
	{
		fprintf(fcc, "%s ", argv[i]);
	}

	fclose(fcc);
}

