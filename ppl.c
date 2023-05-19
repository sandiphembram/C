#include<stdio.h>
float func(float age[]);
int main() 
{
    float result, age[]={23,4,55,6,3,40,5,18}
    result = func(age);
    printf("result is = %0.2f",result);
}
float func(float age[])
{
    int i;
    float result, sum =0.0;
    for(i=0;i<6;i++)
    {
        sum+=age[i];
    }
result=(sum/6);
return result;
}