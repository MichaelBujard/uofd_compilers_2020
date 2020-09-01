#include <string.h>

int main(int argc, char **argv) {

	char *mainString = "this is a sample string";

	char buf[1024];

	strcpy(buf, mainString);
	int len = strlen(buf);

	strcat(buf, mainString);

	int where = strcmp(buf, mainString);

	return 0;
}
