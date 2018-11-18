
//include library
#include<iostream>
using namespace std;

//declaration of the class
class rect
 {
	
//access
public:
	
	//properties

        double b;
	double l;
         
double area;(double l,double b)
{
return l*b;
}
  
double perimeter(double l,double b)
{
return 2*(l+b);
}

}



int main()
{  
double l ,b ,area1 ,area2 ,perimeter1 ,peimeter2 ;
rect r1;
rect r2;

cout<<"enter the length and breadth of rectangle 1"<<endl;
cin>> r1.l;
cin>> r1.b;
perimeter1=r1.perimeter(r1.l;r1.b);
area1=r1.area(r1.len,r1.bre);

 

  cout<<"Enter the length and breadth of rectangle 2"<<endl;
  cin>>r2.len;
  cin>>r2.bre;
  perimeter2=r2.perimeter(r2.len,r2.bre);
  area2=r2.area(r2.len,r2.bre);

  cout<<"Area of rectangle 1 is "<<area1<<endl;
  cout<<"Area of rectangle 2 is "<<area2<<endl;
  cout<<"Perimeter of rectangle 1 is "<<perimeter1<<endl;
  cout<<"Perimeter of rectangle 2 is "<<perimeter2<<endl;

 

  {
  if(perimeter1 > perimeter2) 
  cout<<"Rectangle 1 has larger perimeter"<<endl;

  else if(perimeter2 > perimeter1)
  cout<<"Rectangle 2 has larger perimeter"<<endl;

  else if(perimeter1==perimeter2)
  cout<<"Both the rectangles have equal perimeter"<<endl;
  }



 {
 if(area1 > area2) 
 cout<<"Rectangle 1 has larger area"<<endl;

 else if(area2 > area1)
 cout<<"Rectangle 2 has larger area"<<endl;

 else if(area1==area2)
 cout<<"Both the rectangles have equal perimeter"<<endl;
 }

  return 0;

}





















