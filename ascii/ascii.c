#include <stdio.h>

int main() {
	char c;
	int n,i;
		
	printf("TAULA ASCII MAJÚSCULES 12-1-2016\n");
	printf("CAR  HEX  DEC\n");
	n='Z'-'A';
	for (i=0;i<=n;i++) {
		c='A'+i;
		printf("%c    %x   %d\n",c,c,c);
		printf("%c    %x   %d\n",c+32,c+32,c+32);
	}
	return(0);
}
