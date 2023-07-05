#include <stdio.h>

int main(){
	int x=2;
	printf("%d\n",x<<1);
	printf("%d\n",x>>1);
	int y=((x<<1) + (x>>1));
	printf("%d",y);
	return 0;
}
