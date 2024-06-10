#include "lib.h"
#define TEST(condition, ...) ((condition) ?\
	printf("\033[1;92mPassed: \033[1;96m%s\033[0;0m\n", #condition) : \
	printf(__VA_ARGS__))

int main(int argc, char *argv[])
{
	int v, mx_v;
	v = 500;
	mx_v = 100;

	TEST(v <= mx_v, "-- Voltage %dV exceeds max voltage %dV\n", v, mx_v);

	return 0;
}