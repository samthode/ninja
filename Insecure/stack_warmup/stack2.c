/* stack2.c                                     *
 * specially crafted to feed your brain by gera */
#include <stdio.h>

int main() {
	int cookie;
	char buf[80];

	printf("buf: %p cookie: %p\n", &buf, &cookie);
	gets(buf);

	if (cookie == 0x01020305)
		printf("you win!\n");
}