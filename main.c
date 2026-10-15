#include <stdio.h>

int main() {
  
	int distance;
	int odervalue;
	int tienship;
	printf("distance=");
	scanf("%d",&distance);
	printf("odervalue=");
	scanf("%d",&odervalue);
	if(distance<=0||odervalue<0){
		printf("gia tri khong hop le");
	}
	else if(distance<15&&odervalue>=500000){
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
	

 