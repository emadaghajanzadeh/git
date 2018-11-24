#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	double a,b,c,i,j,k,n,m,d,o;
	scanf("%lf%lf%lf",&a,&b,&c);
	scanf("%lf%lf%lf",&i,&j,&k);
	
	
	m=sqrt((a-i)*(a-i)+(b-j)*(b-j));
	
	n=c+k;
	o=fabs(c-k);
	
	if(m>n)
	printf("Outside");

	if(m>o&&m<n)
	printf("Intersect");
	
	if(m<o&&m<n)
	printf("Inside ");
	

	if(m==n)
	printf("Tangent");
	
return 0;
	
}





	


