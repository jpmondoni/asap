#include <stdio.h>
#include <stdlib.h>

int main(){
	int x1, x2, y1, y2, mov=0;

	scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
	while(x1!=0 || y1!=0 || x2!=0 || y2!=0){    

		if(x1==x2 && y1==y2){
			printf("0\n");
		}

		else if(x1==x2 || y1==y2){
			printf("1\n");
		}

		else if(abs(x1-x2)==abs(y1-y2)){
			printf("2\n");
		}


		scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
	}

	return 0;
}



// -----------------
// |1|2|3|4|5|6|7|8|
// |2|o|X|X|X|X|X|X|
// |3|X|o|X|X|X|X|X|
// |4|X|X|o|X|X|X|X|
// |5|X|X|X|o|X|X|X|
// |6|X|X|X|X|o|X|X|
// |7|X|X|X|X|X|o|X|
// |8|X|X|X|X|X|X|o|
// -----------------