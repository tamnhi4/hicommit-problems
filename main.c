#include <stdio.h>

int main() {
  float dtb,drl;
  scanf("%f",&dtb);
  scanf("%f",&drl);
  if(dtb==xuat sac&&drl==xuat sac){
    printf("HOC_BONG_XUAT_SAC");
  }
  else if(dtb==gioi&&drl==tot||dtb==gioi&&drl==xuat sac||dtb==xuat sac&&drl==tot){
    printf("HOC_BONG_GIOI");
  }
  else if(dtb==kha&&drl==kha||dtb==kha&&drl==tot||dtb==kha&&drl==xuat sac||dtb==gioi&&drl=kha||dtb==xuat sac&&drl==kha){
    printf("HOC_BONG_KHA");
  }
  else{
    printf("KHONG_DAT");
  }
  return 0;
}