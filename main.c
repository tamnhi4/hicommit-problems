#include <stdio.h>

int main() {
  
	int distance, oder_value;
	scanf("%d %d", &distance, &oder_value);
	if(distance<=0||oder_value<0){
		printf("INVALID\n");
	}
	else if(distance<15&&oder_value>=500000){
		printf("mien phi giao hang");
	}
	else{
		if(distance>=1&&distance<=5){
			tienship=15000;
		 }
		else if(distance>=6&&distance<=15){
		    tienship=25000;
		 }
		else{
			tienship=40000;
		 }
		
	}
	printf("%d",tienship);
	return 0;
}
	

 