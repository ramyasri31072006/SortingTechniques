#include<stdio.h>
void selection_sort(int a[],int n){
	int min;
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
