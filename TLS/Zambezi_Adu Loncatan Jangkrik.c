#include<stdio.h>

int main(){
	//declaring variables
	int x1, v1, x2, v2;

	//input processes
	scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

	if(x1 == x2){			//case 1 : x1 = x2
		if(v1 != v2){
			x1++;	
		}
	} else if(x1 < x2 && v1 > v2){	//case 2 : x1 < x2
		while(x1 < x2){
			x1 += v1;
			x2 += v2;
		}
	} else if(x2 < x1 && v2 > v1){	//case 3 : x2 < x1
		while(x2 < x1){
			x2 += v2;
			x1 += v1;
		}
	} 

	//output processes
	if(x1 == x2) {
		printf("YES\n");
	} else printf("NO\n");
	return 0;
}
