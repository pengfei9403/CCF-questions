#include <cstdio>

/*

����һ�����y��һ������d������һ��ĵ�d���Ǽ��¼��գ�
����ע�������2����29�졣������������֮һ�������꣺
����1�� �����4�������������Ҳ���100����������
����2�� �����400����������

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
