#include<stdio.h>
int get_max(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
void radix_sort(int a[],int n){
	int m=get_max(a,n);
	int bucket[10][n],e=1;
	while(m){
		int count[10]={0};
		for(int i=0;i<n;i++){
			int pos=(a[i]/e)%10;
			bucket[pos][count[pos]]=a[i];
			count[pos]++;
		}
		int k=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<count[i];j++){
				a[k++]=bucket[i][j];
			}
		}
		e*=10;
		m/=10;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	radix_sort(a,n);
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
