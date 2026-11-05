#include <stdio.h>

int main() {
  float dtb,drl;
  scanf("%f",&dtb);
  scanf("%f",&drl);
  if(dtb==xuatsac&&drl==xuatsac){
    printf("HOC_BONG_XUAT_SAC");
  }
  else if(dtb==gioi&&drl==tot||dtb==gioi&&drl==xuatsac||dtb==xuatsac&&drl==tot){
    printf("HOC_BONG_GIOI");
  }
  else if(dtb==kha&&drl==kha||dtb==kha&&drl==tot||dtb==kha&&drl==xuatsac||dtb==gioi&&drl=kha||dtb==xuatsac&&drl==kha){
    printf("HOC_BONG_KHA");
  }
  else{
    printf("KHONG_DAT");
  }
  return 0;
}