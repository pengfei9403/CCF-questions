#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std ;

/*

��һ����������a1, a2, ��, an�У��������ĳ��������������������������С���������������������Ϊ�м�������һ�������У����ܴ��ڶ���±겻��ͬ���м�������Щ�м�����ֵ����ͬ�ġ�
��������һ���������У����ҳ�����������е��м�����ֵ��

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
