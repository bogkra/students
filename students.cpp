#include <iostream>
#include <list>
#include <vector>

struct Student 
{
  std::string firstName; 
  std::string name; 
  std::string index; 
};

bool compare(const Student& first, const Student& second)
{
  return (first.index  < second.index);
}

int main ()
{
  std::list<Student> students;
  std::list<Student>::iterator it;

  Student aStudent;
  
  aStudent.firstName = "Paul";
  aStudent.name = "McCartney";
  aStudent.index = "131312";
  students.push_back(aStudent);

  aStudent.firstName = "Ringo";
  aStudent.name = "Starr";
  aStudent.index = "149056";
  students.push_back(aStudent);  
  
  aStudent.firstName = "John";
  aStudent.name = "Lennon";
  aStudent.index = "149666";
  students.push_back(aStudent);  
  
  std::string answer = "";
  do {
      std::cout << "I=Insert new record  L=show the List  S=Sort by index  D=Delete by index  E=End\n";
      std::cin >> answer; 
       
      if (answer== "I" || answer=="i") {
          std::cout << "first name: ";
          std::cin >> aStudent.firstName; 
          std::cout << "last name: ";
          std::cin >> aStudent.name; 
          std::cout << "index: ";
          std::cin >> aStudent.index; 
          std::cout << "\n";
          students.push_back(aStudent);
      }
      else if (answer== "L" || answer=="l") {           
          for (it=students.begin(); it!=students.end(); ++it)
             std::cout << it->firstName  << " " << it->name  << "  index: " << it->index << "\n";
          std::cout << '\n';
      }     
      else if (answer== "S" || answer=="s") {           
          students.sort(compare);
      }          
      else if (answer== "D" || answer=="d") {   
          std::cout << "index: ";
          std::cin >> aStudent.index; 
          for (it=students.begin(); it!=students.end(); ++it)
             if (it->index==aStudent.index) {
             //   std::cout << "Start!\n";
                students.erase(it,it);
                std::cout << "Record successfully deleted\n";
             }    
        //     else 
          //      std::cout << "Index not found\n";
      }          

  }  while (answer!="E" && answer!="e") ;
        
  std::cout << "\nend of the program\n";

  return 0;
}