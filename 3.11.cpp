#include <iostream>
#include <string>
using namespace std;
class MotorVehicle{
    public:
void displayCarDetails();

MotorVehicle(string, string, int,string, int);

void  setmake(string);
    string getmake();
void setfuelType(string);
    string getfuelType();
void setyearOfManufacture(int);
    int getyearOfManufacture();
void setcolor(string);
    string getcolor();
void setengineCapacity(int);
    int getengineCapacity();

private:
    string make;
    string fuelType;
    int yearOfManufacture;
    string color;
    int engineCapacity ;
};
void MotorVehicle::setmake(string M ){
   
    make = M;
}
void MotorVehicle::setfuelType(string F ){
   
    fuelType = F;
}
void MotorVehicle::setyearOfManufacture(int Y ){
   
    yearOfManufacture = Y;
}
void MotorVehicle::setcolor(string C ){
   
    color = C;
}
void MotorVehicle::setengineCapacity(int E ){
   
    engineCapacity = E;
}
string MotorVehicle::getmake(){
   
    return make;
}
string MotorVehicle::getfuelType(){
   
    return fuelType;
}
int MotorVehicle::getyearOfManufacture(){
   
    return yearOfManufacture;
}
string MotorVehicle::getcolor(){
   
    return color;
}
int MotorVehicle::getengineCapacity(){
   
    return engineCapacity;
}


void MotorVehicle::displayCarDetails(){
 cout<<make<<"\n"fuelType<< "\n" yearOfManufacture<< "\n" color<< "\n" engineCapacity<<endl;
}  
int main(){

MotorVehicle MotorVehicle1("Ford" , "Gasolina", 2012, "celeste", 4);
cout<<"Su modelo sigue laas siguientes cualidades: ";
MotorVehicle1.displayCarDetails();
MotorVehicle1.setmake("ford");
MotorVehicle1.setfuelType("Gasolina");
MotorVehicle1.setyearOfManufacture(2012);
MotorVehicle1.setcolor("Celeste");
MotorVehicle1.setengineCapacity(4);
MotorVehicle1.displayCarDetails();
    
};