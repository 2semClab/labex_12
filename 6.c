#include<stdio.h>
void readArray();
void dispArr(int n, int a[]);
int main(){
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("Enter the elements : ");
for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	}
printf("Orginal array :");
print(n,a);
revArray(n,a);
return 0;
}
void readArr(){
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("Enter the elements : ");
for(int i =0; i<n; i++){
	scanf("%d",&a[i]);
	}
}
void dispArr(int n, int a[])
