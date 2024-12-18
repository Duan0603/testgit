#include <stdio.h>

int main(){
	double sum =0;
	int n;
	int i = 1;
	scanf("%d",&n);
	while(i<=n){
		sum+=(double)1.0/i;
		i++;
	}
	printf("%.2f",sum);

	return 0;
}