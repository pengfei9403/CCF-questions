#include <cstdio>
#include <iostream>

using namespace std ;

/*

给定n个整数表示一个商店连续n天的销售量。如果某天之前销售量在增长，而后一天销售量减少，则称这一天为折点，
反过来如果之前销售量减少而后一天销售量增长，也称这一天为折点。其他的天都不是折点。
给定n个整数a1, a2, …, an表示销售量，请计算出这些天总共有多少个折点。
为了减少歧义，我们给定的数据保证：在这n天中相邻两天的销售量总是不同的，即ai-1≠ai。注意，如果两天不相邻，销售量可能相同。

*/

int main(){
	int n , cnt = 0 ;
	int data[10000] ;
	while(scanf("%d",&n)!=EOF){
		cnt = 0 ;
		for(int i = 0 ; i < n ; i++){
			scanf("%d",data+i) ;
		}
		for(int i = 1 ; i < n-1 ; i++){
			if((data[i-1] - data[i]) * (data[i] - data[i+1]) < 0){
				cnt++ ;
			}
		}
		printf("%d\n",cnt) ;
	}
	return 0 ;
}
