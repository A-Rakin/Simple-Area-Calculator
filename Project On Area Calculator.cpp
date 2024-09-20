#include<iostream>
#include<conio.h>
#define pi 3.1416
using namespace std;
class AreaCalculator
{
private:
    int side;
    int l,w;
public:
    int length,width;
    double radius;
    int height;
    int a,b;
    void rectangleArea()
    {
        cout<<"Enter the Length and Width of your rectangle: "<<endl;
        cin>>length>>width;
        int a;
        a=length*width;
        cout<<"The Area of your Rectangle is: "<<a<<endl;
    }
    void Square()
    {
       cout<<"Enter the Length of a Side of your Square: "<<endl;
       cin>>a;
       int ar=a*a;
       cout<<"The area of your Square is: "<<ar<<endl;
    }
    void triangle()
    {
       cout<<"Enter the Length of base and Height of your Triangle: "<<endl;
       cin>>a>>height;
       double t=(0.5*a*height);
       cout<<"The area of your Triangle is: "<<t<<endl;
    }
    void cylinder()
    {
        cout<<"Enter the radius and height of your Cylinder: "<<endl;
        cin>>b>>height;
        int c=(pi*(b*b)*height);
        cout<<"The Surface area of your Cylinder is: "<<c<<endl;
    }
    void sphere()
    {
       cout<<"Enter the radius of your Sphere: "<<endl;
        cin>>radius;
        double rad=(4*pi*(radius*radius));
        cout<<"The area of your Sphere is: "<<rad<<endl;
    }
    void parallelogram()
    {
       cout<<"Enter the Length of base and Height of your parallelogram: "<<endl;
       cin>>b>>height;
       int k=b*height;
       cout<<"The area of your parallelogram is: "<<k<<endl;
    }
    void getdata()
    {
        cout<<"Enter the Side for Volume: "<<endl;
        cin>>side;
    }
    friend void volume(AreaCalculator a)   //Friend Function
    {
        int v;
        v=a.side*a.side*a.side;
        cout<<"Volume is: "<<v<<endl;
    }
    void getinfo()
    {
        cout<<"Enter Length and Width for calculating perimeter: "<<endl;
        cin>>l>>w;
    }
    friend class perimeter;   //Friend Class Declaration
};
class perimeter               //Friend Class Definition
{
    int c;
public:
    void per(AreaCalculator ar)
    {
        c=(2*(ar.l+ar.w));
        cout<<"\nPerimeter is: "<<c<<endl;
    }
};
int main()
{
    AreaCalculator area;
    perimeter p;
    int choice;
    char op;
    do
    {
    system("cls");
    cout<<"\t\t\t\tWelcome to Area Calculator"<<endl;
    cout<<"\t\t\t\t--------------------------"<<endl<<endl;;
    cout<<"\t\t\t\t\tMain Menu "<<endl;
    cout<<"\t\t\t\t\t--------- "<<endl<<endl;
    cout<<"\t\t\t\t|1.  Rectangle|"<<endl<<endl;
    cout<<"\t\t\t\t|2. Square| "<<endl<<endl;
    cout<<"\t\t\t\t|3. Triangle| "<<endl<<endl;
    cout<<"\t\t\t\t|4. Cylinder| "<<endl<<endl;
    cout<<"\t\t\t\t|5. Sphere| "<<endl<<endl;
    cout<<"\t\t\t\t|6. Parallelogram| "<<endl<<endl;
    cout<<"\t\t\t\t|7. Square Volume| "<<endl<<endl;
    cout<<"\t\t\t\t|8. Perimeter of Rectangle| "<<endl<<endl;
    cout<<"\t\t\t\t|9. Exit| "<<endl<<endl;
    cout<<"Enter Your Choice: "<<endl<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            area.rectangleArea();
            break;
        }
    case 2:
        {
            area.Square();
            break;
        }
    case 3:
        {
            area.triangle();
            break;
        }
    case 4:
        {
            area.cylinder();
            break;
        }
    case 5:
        {
            area.sphere();
            break;
        }
    case 6:
        {
            area.parallelogram();
            break;
        }
    case 7:
        {
            area.getdata();
            volume(area);       //Friend Function Calling
            break;
        }
    case 8:
        {
            area.getinfo();
            p.per(area);        //Friend Class Calling
            break;
        }
    case 9:
        {
            cout<<"Thanks For using Calculator..."<<endl;
            break;
        }
    default:
        {
            cout<<"Invalid Choice..."<<endl;
            break;
        }
    }
    cout<<"\nDo You Want to continue??[Yes/no]"<<endl;
    cin>>op;
    }
    while(op=='Y'||op=='y');
getch();
}
