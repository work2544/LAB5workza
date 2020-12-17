#include<iostream>
#include<string>
using namespace std;
int cheetah(int money)
{
    int coupon=0,couponbottle=0,totalbottle=0,intibottle;
   //start
    intibottle=money/10;
    coupon=intibottle;
    totalbottle+=intibottle;  
   //freecheetah
   while((coupon+couponbottle)>=3)
   {
    
    couponbottle=coupon/3;
    coupon=couponbottle+coupon%3;
    totalbottle+=couponbottle;
  

   }
   return totalbottle;
}
int main()
{ 
    int hismoney,intibottle=0;
    cin>>hismoney;   
    cout<<cheetah(hismoney);
    
}
