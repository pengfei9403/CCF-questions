#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std ;

/*

在一个整数序列a1, a2, …, an中，如果存在某个数，大于它的整数数量等于小于它的整数数量，则称其为中间数。在一个序列中，可能存在多个下标不相同的中间数，这些中间数的值是相同的。
　　给定一个整数序列，请找出这个整数序列的中间数的值。

*/

int main(){
	int n , mid ;
	int before , after ;
	int arr[1000];
	while(scanf("%d",&n)!=EOF){
		for(int i = 0 ; i < n ; i++){
			scanf("%d",arr+i) ;
		}
		sort(arr,arr+n) ;
		mid = n / 2 ;
		before = 0 ;
		after = 0 ;
		if(n%2 == 0){
			if(arr[mid] == arr[mid-1]){
				for(int i = 0 ; i < mid ; i++){
					if(arr[i] < arr[mid]){
						before++ ;
					}else{
						break ;
					}
				}
				for(int i = n-1 ; i > mid-1 ; i--){
					if(arr[i] > arr[mid-1]){
						after++ ;
					}else{
						break ;
					}
				}
				if(before == after){
					printf("%d\n",arr[mid]) ;
				}else{
					printf("-1\n") ;
				}
			}else{
				printf("-1\n") ;
			}
		}else{
			for(int i = 0 ; i < mid ; i++){
				if(arr[i] < arr[mid]){
					before++ ;
				}else{
					break ;
				}
			}
			for(int i = n-1 ; i > mid ; i--){
				if(arr[i] > arr[mid]){
					after++ ;
				}else{
					break ;
				}
			}
			if(before == after){
				printf("%d\n",arr[mid]) ;
			}else{
				printf("-1\n") ;
			}
		}
	}
	return 0 ;
}
