/* n4.c                                         *
 * specially crafted to feed your brain by gera */

#include 
#include 

unsigned int count;

int main(int argv, char **argc) {
	char buf[80],**args;
	
	fscanf(stdin, "%u", &count;);

	args = alloca(count*sizeof(char*));
	while (count--) {
		if (!fgets(buf,sizeof buf,stdin)) break;
		*args++=strdup(buf);
	}
}