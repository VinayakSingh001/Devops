#include<stdio.h>
void fun(int * a,int n, int k){
 int i,j,temp;
 for(i=1;i<k;i++){
 for(j=0;j<k-i;j++){
 if(a[j]>a[j+1]){
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 for(i=1;i<n-k;i++){
 for(j=k;j<n-i;j++){
 if(a[j]<a[j+1]){
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
}
int main() {
 int i;
 int a[8]={3,5,2,7,4,8,1,9};
 fun(a,8,4);
 for(i=0;i<8;i++){
 printf("%d",a[i]);
 }
}