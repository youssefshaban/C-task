#include <stdio.h>
#include <conio.h>
#include <math.h>
int main () {

	/*
	first we have to know the result for (b^2-4*a*c) 
	if it's +ve there is away to solve it ,
	-ve another way 
	= 0 another way

	i don't have a math background, i didn't write the code	alone
	
	thanks kareem arafa for helping 
	*/

	 float b,a,c,square,root1,root2;
	 int check;
	 // get the input from user
	 printf("enter the value of a : ");
	 scanf("%f",&a);
	 printf ("enter the value of b : ");
	 scanf("%f",&b);
	 printf("enter the value of c : ");
	 scanf("%f",&c);


	 //set the value -> check (b^2-4*a*c)
	 check = (b*b)-(4*(a*c));


	 // get square value
	 square= (sqrt(-1*check)/(2*a));


	 // check is+ve
		 if (check > 0) {
		 //root1 = -b+sqrt(b^2-4ac)/2a
		 root1 = (b*-1)+sqrt(check)/(2*a);

		 //root2 = -b-sqrt(b^2-4*ac)/2a
		 root2 = (b*-1)-sqrt(check)/(2*a);
		 printf("the root1 = %f the root2 = %f",root1,root2) ;
		 getch();
             
		 }
	 // check is-ve
		if(check < 0 ) {
		printf("%.3f,%.3f\n",((b*-1)/(2*a)),(square));
		printf("%.3f,%.3f",((b*-1)/(2*a)),(square*-1));
		getch();

		}
	 // check is = 0
		if (check == 0 ) {
		root1 = (b*-1)/(2*a);
		printf("%.3f",root1);
		getch();

		}
// clear the console
clrscr();
return 0;
}
