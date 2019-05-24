#include "libavresample/avresample.h"
unsigned avresample_version(void)
{
	return 0;
}
const char *avresample_configuration(void) {
	return "avresample_configuration";
}

unsigned postproc_version(void) { return 0; }
const char *postproc_configuration(void) {
	return "postproc_configuration";
}