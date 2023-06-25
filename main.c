#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void in_place(int* a,int* b);

int main()
{
 /* ?\n;||(or) e &&(and)*/

	int a = 3;
	int b = 2;
	in_place(&a,&b);
	printf("a: %d\n",a);
	printf("b: %d\n",b);

 return 0;
}

void in_place(int* a,int* b){

	*a = 2*((*a)+(*b));
	*b = (*a - 2*(*b))/2;
	*a = (*a - 2*(*b))/2;

}
