#include <iostream>

using namespace std;
struct rectangle{

  int length;
  int width;

public:

rectangle ()
{
    length = 0;
    width = 0;
}

    rectangle(int l, int w)
{
    length=l;
    width=w;

}

int area()
{
    return length*width;
}

int perimeter()
{
 return 2*(length+width);
}
void setlength(int l)
{
    length=l;
}
void setwidth(int w)
{
    width=w;
}
int getlength()
{
    return length;
}
int getwidth()
{
    return width;
}
~rectangle()
{
    cout<<"Destructor";
}
};
int main()
{
  rectangle r(10,5);

  cout<<"Area"<<r.area()<<endl;
  cout<<"Perimeter"<<r.perimeter()<<endl;

    return 0;
}
