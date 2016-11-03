#include "queue_air.h"
#include <iostream>
#include <string>

using namespace std;

//constructor
queue::queue(){ 
    first = NULL;
}

//destructor
queue::~queue(){
	while(first!= NULL){
	delete first;
	first = first->getnext();
	}
}

//Show top values
string queue::top_name(){
 if(isempty()){
   return "nil";
 }else{
   return first->getname();
 }
}

double queue::top_class_col(){
 if(isempty()){
   return -1;
 }else{
   return first->getclass_col();
 }
}

double queue::top_fare(){
 if(isempty()){
   return -1.0;
 }else{
   return first->getfare();
 }
}

double queue::top_score(){
 if(isempty()){
   return -1.0;
 }else{
   return first->getscore();
 }
}

//Insert a node based on the priority
void queue::insert(string n,double cl,double f){
	//assign cur to first
	passenger* cur = first;
	
	//assign prev to NULL
	passenger* prev = NULL;
	
	//assign a new node based on parameters
	passenger* p = new passenger();
	p->setname(n);p->setclass_col(cl);p->setfare(f);p->setscore();p->setnext(NULL);
		
	//Run while loop to insert based on calculated scores	
	while(cur!= NULL){
	  if(cur->getscore() >= (cl+1/f+0.000000000001)) break;       //+0.000000000001 is a small penalty on the score for queing late even with same class, connecting and fare
	  prev = cur;	 
	  cur = cur->getnext();		
	  //cv = 	cur->getconnect();
	}		
	
	passenger*count = new passenger();
	count = cur;
	

	//case1; insert in front of head 
	if(prev == NULL){   
	  p->setnext(first);
	  first = p;	
	}else{
	  p->setnext(cur);
	  prev->setnext(p);
	}
}//end of insert function


//returns string name in top of the queue and removes the node pointed to the top
string queue::pop(){
if(isempty()){
	return NULL;
}else{
passenger*tmp = first;
string n = first->getname();
first = first->getnext();
delete tmp;
return n;

}
}//pop function

//Display function
void queue::display(){

//assign tmp variable so that it doesn't change the underlying value
passenger*tmp = first;
while(tmp!= NULL){
	cout<<"["<<tmp->getname()<<","<<tmp->getclass_col()<<","<<tmp->getfare()<<"]"<<"->";
	tmp = tmp->getnext();//move to next node for processing
}
	cout<<"NULL"<<endl;
	delete tmp;

}

//Is the queue empty?
bool queue::isempty(){

//alt do this return first == NULL;
	if(first == NULL){
	return true;
	}else{
	return false;
	}
}



