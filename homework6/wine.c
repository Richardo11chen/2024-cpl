//
// Created by ASUS on 24-11-21.
//
#include <stdio.h>
int value[100000];
int volume[100000];


/*void InsertionSortAndConvert(int value[], int n){
  for(int i=1;i<n;i++){
  int j=i-1;
  int key=value[i];
  while(j>=0&&value[j]<key){
    value[j+1]=value[j];
    j--;
    }
    value[j+1]=key;
}
}
*/

int MaxIndex(int value[],int n,int index) {
  int max=0;
  index=0;
  for (int i=0;i<n;i++) {
    if (max<value[i]) {
      max=value[i];
      index=i;
    }
  }
  return index;
}
int main() {
  int n,L;
  scanf("%d%d",&n,&L);
  for(int i=0;i<n;i++){
    scanf("%d",&value[i]);
  }
  for(int i=0;i<n;i++){
    scanf("%d",&volume[i]);
  }

  //InsertionSortAndConvert(value,n);

  int maxsum=0;
  int index=0;
  while (1) {
    int maxindex=MaxIndex(value,n,index);
    for (int j=0;j<volume[maxindex];j++) {
      maxsum+=value[maxindex];
      L--;
      if (L==0) {
        printf("%d",maxsum);
        return 0;
      }
    }
    value[maxindex]=0;
  }
}
