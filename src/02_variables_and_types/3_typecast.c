#include <stdio.h>

void main()
{
    int a = 1; /** Declare an integer variable 'a' initialised to 1 */
    int b = 2; /** Declare an integer variable 'b' initialised to 2 */

    /**
     * The expression (a + b) / 2 evaluates to an integer
     * integer value is cast to a float */
    float avg = ((float)a + b) / 2;
    printf("\nThe average of %d and %d = %lf \n", a, b, avg);

    /** Some castings are implicit */
    int num = avg;
    printf("\nNum = %d \n", num);


    float pi_f = 3.142857142857142793701541449991054832935333251953125; 
    double pi_d = 3.142857142857142793701541449991054832935333251953125;
    printf("\nFloat  = %.70f \n", pi_f); 
    printf("Double = %.70f \n", pi_d); 

    /** Castings large memory variables to smaller memory variables 
     * in most cases result in data loss
     */

    pi_f = pi_d;
    printf("\nDouble cast to float = %.70f \n", pi_f); 

    
}
