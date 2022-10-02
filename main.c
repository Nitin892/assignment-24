1. Define a function to check whether a given number is a Prime number or not.

#include <iostream>
int isPrime(int x)
{
   if(x==0||x==1) return 0;
   for (int i = 2; i <x ; ++i) {
       if(x%i==0) return 0;
   }
   return 1;
}

int main()
{
   int a;
   std::cout<<"\nEnter a number: ";
   std::cin>>a;
   if(isPrime(a))
       std::cout<<a<<" is prime\n";
   else std::cout<<a<<" is not prime\n";
   return 0;
}


2. Define a function to find the highest value digit in a given number.
#include <iostream>
int highestDigit(int n)  //564;
{
   int digit=0;
   int t=0;
   while (n>0)
   {
       digit=n%10;
       n=n/10;
       if(digit>t)
           t=digit;
   }

   return t;
}

int main()
{
   int a;
   std::cout<<"\nEnter a number: ";
   std::cin>>a;
   std::cout<<highestDigit(a);
   return 0;
}

3. Define a function to calculate x raised to the power y.
#include <iostream>
int power(int x,int n)
{
   int t=1;
   for (int i = 0; i < n; ++i) {
       t=t*x;
   }
   return t;
}

int main()
{
   int a,p;
   std::cout<<"\nEnter a number: ";
   std::cin>>a;
   std::cout<<"\nEnter power of a number: ";
   std::cin>>p;
   std::cout<<power(a,p);
   return 0;
}

4. Define a function to print Pascal Triangle up to N lines.

5. Define a function to check whether a given number is a term in a Fibonacci series or
not.

#include <iostream>
int isFibonacci(int n)
{
   int a=-1;
   int b=1;
   while(1)
   {
       int c=a+b;
       a=b;
       b=c;
       if(c==n)
           return 1;
       if(c>n)
           return 0;
   }
}

int main()
{
   int a;
   std::cout<<"\nEnter a number: ";
   std::cin>>a;
   if(isFibonacci(a)) std::cout<<"It is fibonacci series";
   else std::cout<<"It is not fibonacci series";
   return 0;
}

6. Define a function to swap data of two int variables using call by reference

#include <iostream>
void swap(int &a,int &b)
{
   a=a+b;
   b=a-b;
   a=a-b;
}

int main()
{
   int a,b;

   std::cout<<"\nEnter two number: ";
   std::cin>>a>>b;
   std::cout<<a<<" "<<b<<"\n";
   swap(a,b);
   std::cout<<a<<" "<<b;
   return 0;
}

7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
int sum(int x,int y,int z=0)
{
   return x+y+z;
}
int main()
{
   int a=9,b=5,c=6;
   std::cout<<sum(a,b);
   return 0;
}
8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle

#include <iostream>
inline float areaOfRectangle(float l,float b)
{
   return l*b;
}

inline int areaOfRectangle(int l,int b)
{
   return l*b;
}

inline int AreaOfCircle(int r)
{
   return 2*3.14*r;
}

inline float AreaOfCircle(float r)
{
   return 2*3.14*r;
}

inline int AreaOfTriangle(int l,int b)
{
   return 1/2*l*b;
}

inline float AreaOfTriangle(float l,float b)
{
   return 1/2*l*b;

}


int main()
{
   float a=8.90,b=9.64;
   int r=9;
   std::cout<<"areaOfRectangle "<<areaOfRectangle(a,b)<<std::endl;
   std::cout<<"AreaOfCircle "<<AreaOfCircle(r)<<std::endl;
   std::cout<<"AreaOfTriangle "<<AreaOfTriangle(a,b);
   return 0;
}


9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.

#include <iostream>
int max(int x,int y);
float max(float x,float y);
int main()
{
   float a=8.68,b=6.3;
   std::cout<<max(a,b);
   return 0;
}


int max(int x,int y)
{
   int t=x>y?x:y;
   return t;
}

float max(float x,float y)
{
   float t=x>y?x:y;
   return t;
}


10. Write functions using function overloading to add two numbers having different data
types.

#include <iostream>
inline int sum(int a,int b)
{
   return a+b;
}

inline float sum(float a,float b)
{
   return a+b;
}

int main()
{
   int a=9,b=8;
   std::cout<<sum(a,b);
   return 0;
}

