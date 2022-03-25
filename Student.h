#include<iostream>
using namespace std;

class Student {
  private :// private section
        int studentId;//    int studentId
        char name[20];//    name <- 20 charcters
  public :// public section
        void assignDetails(int stdId,char nam[]); //    assignDetails() method declaration
        void display(); //    display() method declaration
};
