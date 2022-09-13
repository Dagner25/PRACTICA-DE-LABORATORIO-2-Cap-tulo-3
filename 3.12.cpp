#include <iostream>
#include <string>
using namespace std;
int main()
{
date date1(30,15,2005);
cout<<"La fecha es ";
date1.displayDate();
cout<<"\n comparado con ";
date1.setmes(15);
date1.setyear(1998);
date1.displayDate();

class date{

public:
void displayDate();

date(int, int, int);
void  setdia(int);
    int getdia();
void setmes(int);
    int getmes();
void setyear(int);
    int getyear();
private:
    int dia;
    int mes;
    int year;
};
date::date (int Dia ,int Mes ,int Year)
{
if( Mes >= 1, Mes <= 12)
    mes = Mes;
else {
    mes = 1;    
}

if( Dia >= 1, Mes <= 31)
    dia = Dia;
else {
    dia = 1;    
}
if( Year >= 1900, Year <= 2023)
    year = Year;
else {
    year = 1900;    
}
}

void date::setdia(int Dia ){
   
    dia=Dia;
}
void date::setmes(int Mes ){
   
    mes=Mes;
}
void date::setyear(int Year)   {
   
    year=Year;
}
int date::getdia(){
   
    return dia;
}
int date::getmes(){
  
    return mes;
}
int date::getyear()
{
 return year;
}

void date::displayDate(){
    
    cout<<dia<<"/"<<mes<<"/"<<year<<endl;
}
