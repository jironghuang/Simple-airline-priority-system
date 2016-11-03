#include "passenger.h"
#include <iostream>
#include <string>
using namespace std;

passenger::passenger(){

  name = "";
 //1-Connect:Platinum; 2-Connect:Gold; 3-Connect:Silver; 4-Connect:Airline club members; 5-Connect:Airline frequent flyers; 6-Connect:No classifcation 
 //7-NoConnect:Platinum; 8-NoConnect:Gold; 9-NoConnect:Silver; 10-NoConnect:Airline club members; 11-NoConnect:Airline frequent flyers; 12-NoConnect:No classifcation 
  class_col = 1.0;	
  fare = 0;   //this stores the fare  
  priority_score = 0;
  next=NULL;		//private member variable address
}

/////////////name details///////////////////////
string passenger::getname() const{
return name; 
}

void passenger::setname(string n) { 
name = n; 
}
//////////////////////////////////////////////////////

/////////////class category details///////////////////////
int passenger::getclass_col() {
return class_col; 
}

//This sets the value in the current node
void passenger::setclass_col(double cl) { 
class_col = cl; 
}
//////////////////////////////////////////////////////

/////////////fare details///////////////////////
double passenger::getfare(){
return fare; 
}

//This sets the value in the current node
void passenger::setfare(double f) { 
fare = f; 
}
//////////////////////////////////////////////////////

/////////////score details///////////////////////
double passenger::getscore(){
return priority_score; 
}

//This sets the value in the current node
void passenger::setscore() { 
priority_score = class_col + (1/fare); 
}
//////////////////////////////////////////////////////


/////////////address details///////////////////////
passenger* passenger::getnext()const { 
return next; 
}


//This set the address of next node
void passenger::setnext(passenger* n) { 
next =n ; 
}
//////////////////////////////////////////////////////








