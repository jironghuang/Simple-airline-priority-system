/*
1. Based on the given rules, I inserted an indivudal nearer to the top (head) location based on a derived score from connecting flight status, club priority and fare.
	-->Customers with connecting flights have first priority
	-->Platinum customers have second priority
	-->Gold customers have third priority
	-->Silver customers have fourth priority
	-->Airline club members have fifth priority
	-->Airline frequent flyers have sixth priority
	-->Everyone else has last priority

2. I categorise the connecting flight status and club priority status as the following scores
	-->1-Connect:Platinum; 2-Connect:Gold; 3-Connect:Silver; 4-Connect:Airline club members; 5-Connect:Airline frequent flyers; 6-Connect:No classifcation 
    -->7-NoConnect:Platinum; 8-NoConnect:Gold; 9-NoConnect:Silver; 10-NoConnect:Airline club members; 11-NoConnect:Airline frequent flyers; 12-NoConnect:No classifcation 
3. The formula to derive the priority score is as follows: Point in category 2 + 1/(fare price). I use a reciprocal of fare price for second part of the formula. Hence, a larger fare price paid would result in a smaller score, which will propel the individual closer to the top of the queue.
4. In addition, I also place a small penalty for an individual who queued late. To illustrate, out of 2 individuals who paid for the same fare price, same connecting flight and club priority statuses, the person who queued earlier would be given a priority over an individual who queued later.
*/

#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

using namespace std;

//node ADT
class passenger{
  private:
  	 string name;
	 //1-Connect:Platinum; 2-Connect:Gold; 3-Connect:Silver; 4-Connect:Airline club members; 5-Connect:Airline frequent flyers; 6-Connect:No classifcation 
    //7-NoConnect:Platinum; 8-NoConnect:Gold; 9-NoConnect:Silver; 10-NoConnect:Airline club members; 11-NoConnect:Airline frequent flyers; 12-NoConnect:No classifcation 
     double class_col;	
     double fare;   //this stores the fare  
     double priority_score; //this stores (class_col + 1/fare). Smaller the score, the closer you will be the first
     passenger* next;    //this stores the address of the next node
     
 
     
  public:
     passenger();	    //this shows the default constructor
     
     void setnext(passenger*);	//Sets the next node storing the address
     passenger* getnext() const;	//This gets the next node address
     
     string getname() const;	
     void setname(string);	     
     
     int getclass_col();	
     void setclass_col(double);	
     
     double getfare();	
     void setfare(double); 
     
     double getscore();	
     void setscore(); 
          
};
#endif
