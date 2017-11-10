
Format Strings #3



/* fs3.c                                       *
 * specially crafted to feed your brain by riq */

/* Not enough resources?		       */

int main(int argv,char **argc) {
        char buf[256];

        snprintf(buf,sizeof buf,"%s%c%c%hn",argc[1]);
}