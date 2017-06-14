#include <cstdio>
#include <iostream>

using namespace std ;

/*

��ʵ��һ����·��Ʊϵͳ�ļ���λ�����㷨��������һ�ڳ������λ���䡣
��������һ�ڳ�����20�š�ÿһ��5����λ��Ϊ���������������1��100�������е���λ��ţ���һ����1��5�ţ��ڶ�����6��10�ţ��������ƣ���20����96��100�š�
������Ʊʱ��һ���˿��ܹ�һ�Ż����Ʊ����಻����5�š�����⼸��Ʊ���԰�����ͬһ�ű�����ڵ���λ����Ӧ�ð����ڱ����С��������λ������Ӧ�ð����ڱ����С�ļ�������λ�У��������Ƿ����ڣ���
���������ʼʱ��Ʊȫ��δ���������ڸ���һЩ��Ʊָ����㴦����Щָ�

*/

int seat[100] ;

int check(int n){
	int cnt = 0 ;
	for(int i = 0 ; i < 20 ; i++){
		cnt = 0 ;
		for(int j = 0 ; j < 5 ; j++){
//			cout << i*5+j << endl ;
			if(seat[i*5+j] == 0){
				cnt++ ;
				if(cnt == n){
					return i*5+j - n + 1 ;
				}
			}else{
				cnt = 0 ;
			}
		}
	}
	return -1 ;
}

void seat_fp(int n){
	int cnt = 0 , first = 1 ;
	for(int i = 0 ; i < 100 ; i++){
		if(seat[i] == 0){
			if(first){
				first = 0 ;
				printf("%d",i+1) ;
				seat[i] = 1 ;
			}else{
				printf(" %d",i+1) ;
				seat[i] = 1 ;
			}
			cnt++ ;
		}
		if(cnt == n){
			printf("\n") ;
			break ;
		}
	}
}


int main(){
	int n , num ;
	int seat_num ;
	int first = 1 ;
	for(int i = 0 ; i < 100 ; i++){
		seat[i] = 0 ;
	}
	while(scanf("%d",&n)!=EOF){
		for(int i = 0 ; i < n ; i++){
			scanf("%d",&num) ;
			first = 1 ;
			seat_num = check(num) ;
//			cout << seat_num << endl;
			if(seat_num == -1){
				seat_fp(num) ;
			}else{
				printf("%d",seat_num+1) ;
				seat[seat_num] = 1 ;
				seat_num++ ;
				for(int j = 1 ; j < num ; j++){
					printf(" %d",seat_num+1) ;
					seat[seat_num] = 1 ;
					seat_num++ ;
				}
				printf("\n") ;
			}
		}
	}
}
