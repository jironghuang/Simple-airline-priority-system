#include <iostream>
#include <string>
#include "passenger.h"
#include "queue_air.h"
using namespace std;

int main(){
	
 	passenger* p1 = new passenger();
	p1->setname("John"); p1->setclass_col(2); p1->setfare(20.0);
	
	passenger* p2 = new passenger();
	p2->setname("Mary");p2->setclass_col(3); p2->setfare(30.0);
	
	passenger* p3 = new passenger();
	p3->setname("Peter"); p3->setclass_col(4); p1->setfare(50.0);
	
	p1->setnext(p2); p2->setnext(p3);
	//print(p1);		
	
	cout<<"class category"<<p1->getclass_col()<<endl;
	
	
	//void queue::insert(string n,int c,int cl,double f)
	
	queue q;
	q.insert("Peter1",5,50.0);	
	q.insert("John",1,10.0);
	q.insert("Mary1",3,30.0);
	q.insert("Jane",2,40.0);	
	q.insert("Peter2",5,70.0);
	q.insert("Peter3",5,20.0);
	q.insert("Mary2",3,50.0);
	q.insert("Mary3",3,70.0);
	q.insert("Mary4",3,70.0);
	
	q.display();
	
	cout<<"Name of first person in the queue: "<<q.top_name()<<endl;
	 //1-Connect:Platinum; 2-Connect:Gold; 3-Connect:Silver; 4-Connect:Airline club members; 5-Connect:Airline frequent flyers; 6-Connect:No classifcation 
    //7-NoConnect:Platinum; 8-NoConnect:Gold; 9-NoConnect:Silver; 10-NoConnect:Airline club members; 11-NoConnect:Airline frequent flyers; 12-NoConnect:No classifcation 
	
	cout<<"Category of first person in queue (1-Connect:Platinum; 2-Connect:Gold; 3-Connect:Silver; 4-Connect:Airline club members; 5-Connect:Airline frequent flyers; 6-Connect:No classifcation; 7-NoConnect:Platinum; 8-NoConnect:Gold; 9-NoConnect:Silver; 10-NoConnect:Airline club members; 11-NoConnect:Airline frequent flyers; 12-NoConnect:No classification)"<<q.top_class_col()<<endl;
	cout<<"Fare paid by first person in the queue: "<<q.top_fare()<<endl;
    q.pop();       //Process the first person in the queue. Usher him into the airplane 
    q.display();   
	
}


