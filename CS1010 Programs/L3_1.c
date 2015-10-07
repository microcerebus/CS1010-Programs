/* Lesson for 3_1 */  

#include <math.h>
#include <stdio.h>  
void main(void)  
{
    double x=3.0, y=4.0, a,b,c,d,e,f;
    float g; 
 
    a=sin(x);
    b=exp(x);
    c=log(x);
 
    d=sqrt(x);
    e=pow(x,y);
    f=sin(y)+exp(y)-log10(y)*sqrt(y)/pow(3.2,4.4);
    g=log(x);
  
    printf ("x=%4.1f    y=%4.1f \n\n\r\  
      a=sin(x)    = %11.4f\n\r\  
      b=exp(x)    = %11.4f\n\r\  
      c=log(x)    = %11.9f\n\n\r\  
      d=sqrt(x)   = %11.4f\n\r\  
      e=pow(x,y)  = %11.4f\n\r\  
      f=sin(y)+exp(y)log10(y)*sqrt(y)/pow(3.2,4.4)= %11.4f\n\n\r\  
      g=log(x)    = %11.9f\n",x,y, a,b,c,d,e,f,g);  
}  
