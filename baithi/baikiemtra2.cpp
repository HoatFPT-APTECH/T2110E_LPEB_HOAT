#include<stdio.h>
float average(int n,int arr[]){
	int tong=0,count=0;
	for(int i=0;i<n;i++){
		tong+=arr[i];
		count++;
	}
	float tb;
	tb=(float)tong/count;
	return tb;
}
int main(){
	int n;
	printf("moi nhap vao chieu dai mang:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n;i++){
		printf("moi nhap vao so thu %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("so trung binh la:%.2f",average(n,arr));
}
