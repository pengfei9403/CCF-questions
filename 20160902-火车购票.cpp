#include <cstdio>
#include <iostream>

using namespace std ;

/*

请实现一个铁路购票系统的简单座位分配算法，来处理一节车厢的座位分配。
　　假设一节车厢有20排、每一排5个座位。为方便起见，我们用1到100来给所有的座位编号，第一排是1到5号，第二排是6到10号，依次类推，第20排是96到100号。
　　购票时，一个人可能购一张或多张票，最多不超过5张。如果这几张票可以安排在同一排编号相邻的座位，则应该安排在编号最小的相邻座位。否则应该安排在编号最小的几个空座位中（不考虑是否相邻）。
　　假设初始时车票全部未被购买，现在给了一些购票指令，请你处理这些指令。

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
