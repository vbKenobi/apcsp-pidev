#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float areaOfCircle (float radius)
{

  float area = radius * radius * M_PI;
  return area;

}

int main (int argc, char* argv[])
{
    
    
  float r1;
  float r2;


  
  
  if (argc == 4)
  {
      r1 = atof(argv[2]);
      r2 = atof(argv[3]);
  }
  
  if ( (argc != 4) || ( argc == 4 ) && ( (r1 == 0.0) || ( r2 == 0.0) || (r2 < r1) ) )
  {
    printf("Please put in the first radius \n");
    scanf("%f", &r1);
    printf("Please put in the second radius \n");
    scanf("%f", &r2);
  }
  
  if ( (r1 == 0.0) || ( r2 == 0.0) || (r2 < r1) )
  {
      printf("Please enter valid input, restart program\n");
      return 0;
  }

  float radius;

  float area;

  for (radius = r1; radius <= r2; radius++)
    {

      area = areaOfCircle (radius);
      printf ("The area of the circle with radius of %f is %f \n", radius, area);
    }
  return 0;
}
