/**
 * cbc - Console clipboard copy file (no X11).
 *
 * @author  zvezdochiot <zvezdochiot@github.com>
 */
#include "cb.h"

void usage()
{
    printf("Concole clipboard copy file\n\n");
    printf("Usage: cbf <file_name>\n\n");
}

int main(int argc, char** argv) {
	int i;
	FILE *fin;
    if (argc < 2) {
        usage();
        exit(0);
    }

	if ((fin = strcmp(argv[1], "-")? fopen(argv[1], "r") : stdin) == NULL)
    {
        printf("can't open %s\n", argv[1]);
        exit(1);
    }

	if ((fcc = fopen(consoleclip, "w")) == NULL)
    {
        printf("can't open %s\n", consoleclip);
        exit(1);
    }

    while (fgets(buf, 1024, fin) != NULL)
    {
		fprintf(fcc, "%s", buf);
	}

	fclose(fin);
	fclose(fcc);
}

