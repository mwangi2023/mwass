#include <iostream>
using namespace std;
class Animal
{
private:
string name;
string color;
public:
void makenoise();
void SetName(string nm);
void SetColor(string cl);
};
void Animal::makenoise()
{
cout <<"I am a "<<name <<endl;
cout <<"I am "<< color <<" in color" <<endl;
}
void Animal::SetName(string nm)
{
name=nm;
makenoise();
}
void Animal::SetColor(string cl)
{
color=cl;
}
int main()
{
Animal animal2; //declare an object of the type Animal
animal2.SetName("person"); //assign a name the object animal2
animal2.SetColor("Brown");//assign a color to the object animal2
animal2.makenoise(); //to call the member function MakeNoise()
return 0;
}