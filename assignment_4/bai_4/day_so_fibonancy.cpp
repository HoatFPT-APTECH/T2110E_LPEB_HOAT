#include<stdio.h>
int main(){
	int i1=0,i2=1,i3,i,n;
	printf("nhap vao so n trong day Fibonancy: \n");
	scanf("%d",&n);
	if(n==1)printf("so %d trong day fibonancy la %d\n",n,i1);
	else if(n==2)printf("so %d trong day fibonancy la %d\n",n,i2);
	
	     else if(n<=0){
		while(n<=0){
			printf("moi nhap lai, n phai lon hon 0\n");
		    printf("nhap vao so n trong day Fibonancy: \n");
	        scanf("%d",&n);}
				for(i=3;i<=n;i++){
		i3=i2+i1;
		i1=i2;
		i2=i3;}
			printf("so %d trong day Fibonancy la:%d\n",n,i3);}
		else{
		for(i=3;i<=n;i++){
		i3=i2+i1;
		i1=i2;
		i2=i3;
	}
	printf("so %d trong day Fibonancy la:%d\n",n,i3);}
	
}
