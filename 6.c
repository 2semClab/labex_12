#include<stdio.h>
void readArray(int a[]);
void dispArr(int n, int a[]);
int main(){
int a[];
int b[];
printf("Enter the size of first the array : ");
readArray(a);
printf("Enter the size of the array : ");
readArray(a);
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("Enter the elements : ");
for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	}
return 0;
}
void readArr(){
int n;
scanf("%d",&n);
int a[n];
printf("Enter the elements : ");
for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	}
}
void dispArr(int n, int a[]){
for(int i =0; i<n; i++){
	printf("%d",a[i]);
	}
}
