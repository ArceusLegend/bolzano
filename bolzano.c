#include <stdio.h>
#include <math.h>

float f(float x);

int main(void)
{	
    float x1, x2, xm;
    	
	scanf("%f", &x1);
	scanf("%f", &x2);
	
	if ( f(x1)*f(x2) <=0 )
	{
		do
		{   xm=(x1+x2)/2;
			
			if ( f(x1)*f(xm) <=0 )
			{ x2= xm;
			}
			else
			{ x1= xm;			
			}
		} while ( x2-x1 > 0.001);
		
	printf("Riza metaksi twn x1 kai x2, x= %f\n",xm);
	
	}
	else
	{ printf("f(x1)*f(x2) > 0 Den mporei na brethei riza.\n");		
	}

	return 0;
}

/*
synarthsh f(x)
*/
float f(float x)
{
	return cos(x)*x;
}

