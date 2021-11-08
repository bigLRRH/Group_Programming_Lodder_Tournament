#include<stdio.h>
#include<math.h>
int main(){
	int N,n,i,j,k,count,count1=0,count2=0; 
	char c;
	scanf("%d %c",&N,&c);
	n=sqrt((N+1)/2.0);
	for(i=n;i>=1;i--){
		for(k=0;k<n-i;k++)
		printf(" ");
		for(j=0;j<2*i-1;j++){ 
			printf("%c",c);
			count1++;
		} 
		printf("\n");
	}
	for(i=2;i<=n;i++){
		for(j=0;j<n-i;j++)
		printf(" ");
		for(k=0;k<2*i-1;k++){ 
		printf("%c",c);
		count2++; 
		} 
		printf("\n");
	}
	count=count1+count2;
	printf("%d\n",N-count);
	return 0;
}