#include <cstdio>
#include <cmath>

using namespace std ;

/*

С���������ù�Ʊ�Ĳ����̶����о���Ʊ��
С���õ���һֻ��Ʊÿ������ʱ�ļ۸�����֪������ֻ��Ʊ�����������󲨶�ֵ�Ƕ��٣������⼸����ĳ�����̼۸���ǰһ�����̼۸�֮��ľ���ֵ����Ƕ��١�

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
