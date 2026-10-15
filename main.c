#include <stdio.h>

int main() {
  	int a, b, c;
	int max=a;
	scanf("%d %d %d", &a, &b, &c);
	if(b>max){
		max=b;
	}
	else{
		max=c;
	}
	printf("%d",max);
    return 0;
}