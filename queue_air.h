#ifndef QUEUE_AIR_H
#define QUEUE_AIR_H
#include "passenger.h"
#include <string>

using namespace std;

class queue{
   private:
      passenger* first;
      
   public:
      queue();
      ~queue();	//destructor is required whenever there're dynamic variable
      
      string top_name(); //shows top name
      double top_class_col(); //shows top class category
      double top_fare(); //top fare value
      double top_score(); //top fare value 
       
      string pop(); //remove the first passenger (already sorted according to prioirty when inserting)
      
      void insert(string,double,double); //insert new passenger according to the rules
      
      bool isempty();	//must test if empty, if not will have an error-->used befor top and pop
      void display();  //optional for testing purposes
      
};
#endif

