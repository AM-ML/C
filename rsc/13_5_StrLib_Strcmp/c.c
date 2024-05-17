#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[5] = "a", t[5] = "b", r[5] = "c", i[5] = "c";
	
	char a[20], b[20];


	// Comparing strings using strcmp()

	// strcmp(const *s1, const *s2);
	
	strcpy(a, strcmp(s, t) == 0 ? "\033[0;32mEqual" : "\033[0;31mNot Equal\033[0;0m");
	strcpy(b, strcmp(r, i) == 0 ? "\033[0;32mEqual" : "\033[0;31mNot Equal\033[0;0m");

	printf("\033[0;33m%s : %s \033[0;36m=> %s\n", s, t, a);
	printf("\033[0;33m%s : %s \033[0;36m=> %s\n\033[0;0m", r, i, b);

	return 0;
}
