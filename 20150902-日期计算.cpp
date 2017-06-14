#include <cstdio>

/*

给定一个年份y和一个整数d，问这一年的第d天是几月几日？
　　注意闰年的2月有29天。满足下面条件之一的是闰年：
　　1） 年份是4的整数倍，而且不是100的整数倍；
　　2） 年份是400的整数倍。

*/

int isrun(int n){
	if(n%100 == 0){
		if(n%400 == 0){
			return 1 ;
		}else{
			return 0 ;
		}
	}else{
		if(n%4 == 0){
            return 1 ;
		}else{
			return 0 ;
		}
	}
}

int main(){
	int year , data ;
	int month[12] = {31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31} ;
	int rmonth[12] = {31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31} ;
	while(scanf("%d\n%d",&year,&data)!=EOF){
		if(isrun(year)){
			for(int i = 0 ; i < 12 ; i++){
				if(data <= rmonth[i]){
					printf("%d\n%d\n",i+1,data) ;
					break ;
				}else{
					data -= rmonth[i] ;
				}
			}
		}else{
			for(int i = 0 ; i < 12 ; i++){
				if(data <= month[i]){
					printf("%d\n%d\n",i+1,data) ;
					break ;
				}else{
					data -= month[i] ;
				}
			}
		}
	}
	return 0 ;
}
