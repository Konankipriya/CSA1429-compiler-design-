#include <stdio.h>
#include <stdbool.h>
int main() {
    char str[100];
    int w=0, n=0,i;
    printf("enter the input And to stop reading input enter ' ~' \n");
    bool inWord = false; 
	scanf("%[^~]s", str);
    for (i = 0; str[i] != '\0'; i++) {
    	if(str[i]==' '||str[i]=='\t') {
			w++;
		} else if(str[i]=='\n') {
            n++;
        }
	}
	printf("Number of whitespace: %d\n", w);
    printf("Number of newline : %d\n", n);
	return 0;
}
