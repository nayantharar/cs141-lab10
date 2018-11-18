
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
	 






























// declaing variables
	int x , y , q , p ;
	rect Rectangle1;
	rect Rectangle2;
	//assinging values tproperties of bjects in class , inputs
	cout<< "enter dimensions of Rectangle1"<<endl;
	cin>>Rectangle1.l;
	cout<<endl;
	cin>>Rectangle1.b;
	
	cout<<endl<<endl<<endl;
	
	cout<< "enter dimensions of Rectangle2"<<endl;
	cin>>Rectangle2.b;
	cout<<endl;
	cin>>Rectangle2.l;

	cout<<endl<<endl<<endl;

	x=Rectangle1.getAr();
	y=Rectangle2.getAr();
	q=Rectangle1.getPer();
	p=Rectangle2.getPer();
	
	//cmparing twoo rectangles
	if(x!=y){
		cout<<max(x,y)<<"has larger area of the two";

		}
	else{
		cout<<"Both have equal areas"<<endl<<endl;
		}
	if(p!=q){
		cout<<max(q,p)<<"has maximum perimeter"<<endl<<endl;
		}
	else{
		cout<<"Both have equal boundry length"<<endl<<endl;
		}
	return 0;
} 
