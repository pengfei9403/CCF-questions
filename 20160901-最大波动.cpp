#include <cstdio>
#include <cmath>

using namespace std ;

/*

小明正在利用股票的波动程度来研究股票。
小明拿到了一只股票每天收盘时的价格，他想知道，这只股票连续几天的最大波动值是多少，即在这几天中某天收盘价格与前一天收盘价格之差的绝对值最大是多少。

*/

int main(){
	int n , ans ;
	int arr[1005] ;
	while(scanf("%d",&n)!=EOF){
		for(int i = 0 ; i < n ; i++){
			scanf("%d",arr+i) ;
		}
		ans = arr[1] - arr[0] ;
		for(int i = 1 ; i < n ; i++){
			if(ans < abs(arr[i]-arr[i-1])){
				ans = abs(arr[i] - arr[i-1]) ;
			}
		}
		printf("%d\n",ans) ;
	}
	return 0 ;
}
