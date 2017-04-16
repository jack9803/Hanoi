#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C){
	if(n == 1){
		printf("move plate form %c to %c\n", A, C);
	}
	else{
		hanoi(n-1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n-1, B, A, C);
	}
}

int main(){
	int n;
	printf("plate num : ");
	scanf("%d", &n);
	printf("\n");
	hanoi(n, 'A', 'B', 'C');
	system("pause");
}