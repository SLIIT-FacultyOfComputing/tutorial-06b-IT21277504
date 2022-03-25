#include "Student.h"
#include <iostream>
#include<cstring>

// Assign studentId and name
void Student::assignDetails(int stdId,char nam[]) {
  studentId=stdId;
  strcpy(name,nam);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student Id is : " << studentId << endl;
  cout << "Name is : " << name << endl;
}
