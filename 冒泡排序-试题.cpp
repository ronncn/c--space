//ºÚµ•—°‘Ò≈≈–Ú
#include <stdio.h>
void selectSort(int data[], int n){
	int i,j,k;
	int temp;
	for(i=0;i<n-1;i++){
		for(k=i,j=i+1;j<n;j++){
			if(data[j]<data[k]){
				k = j;
			}
		}
		if(k!=i){
			temp = data[i];
			data[i] = data[k];
			data[k] = temp;
		}
	}
} 
int main(){
	int arr[] = {79,85,93,65,44,70,100,57};
	int i,m;
	m = sizeof(arr)/sizeof(int);
	selectSort(arr,m);
	for(i=0;i<m;i++){
		printf("%d\t",arr[i]);
		printf("\n");
	}
	
	return 0;
}
