#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
 
  int n= (argc-1)/3;
  student *pt_std=new student[n];
  int i;
  //./aout monkey 20 3.5 Art 15 2.5
  for(i=1;i<argc;i+=3)   {
    (pt_std+i/3)->set_all(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
   }
  /*put them in 2 different loops*/
  for(i=0;i<n;i++){  
    (pt_std+i)->print_all();
  }
  float gpa=0;
  for(i=0;i<n;i++)
    {
      if((pt_std+i)->getGPA()>gpa)
       gpa=(pt_std+i)->getGPA();
    }
  for(i=0;i<n;i++)
    {
      if((pt_std+i)->getGPA()==gpa) 
      (pt_std+i)->print_all();
    }
  delete [] pt_std;


  }
  
  


