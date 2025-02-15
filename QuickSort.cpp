#include<stdio.h>
void quick_sort(int a[],int lb,int ub){
	int pivot,start,end;
	if(lb<ub){
	
		pivot=lb;
		start=lb;
		end=ub;
		if(start<end){
			while(a[start]<=a[pivot]){
				start++;
			}
			while(a[end]>a[pivot]){
				end--;
			}
			if(start<end){
				int temp=a[start];
				a[start]=a[end];
				a[end]=temp;
			}
		}
		int temp=a[pivot];
		a[pivot]=a[end];
		a[end]=temp;
	
	quick_sort(a,lb,end-1);
	quick_sort(a,end+1,ub);
}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
}
