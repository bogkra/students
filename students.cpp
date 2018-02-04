#include <iostream>
#include <list>
#include <vector>

<<<<<<< HEAD
class Student 
{
 public:
  std::string firstName; 
  std::string name; 
  std::string index; 

  Student(std::string firstName = "", std::string name = "", std::string index = ""); 

};


Student::Student(std::string inFirstName, std::string inName, std::string inIndex)
{
  firstName = inFirstName;
  name = inName;
  index = inIndex;
}



=======
struct Student 
{
  std::string firstName; 
  std::string name; 
  std::string index; 
};

>>>>>>> a12cf5f16fb5445882a42407b19448a9fe9ea11c
bool compare(const Student& first, const Student& second)
{
  return (first.index  < second.index);
}

<<<<<<< HEAD
class Students
{
 public: 
   void insert_(std::string firstName, std::string name, std::string index); 
   void insert_(); 
   void show(); 
   void sort();
   void deleteS(); 

 private:
   std::list<Student> students;
   std::list<Student>::iterator it;
};

void Students::insert_(std::string firstName, std::string name, std::string index)
{
  Student aStudent(firstName, name, index);
  students.push_back(aStudent);
}

void Students::insert_()
{
  Student aStudent;

  std::cout << "first name: ";
  std::cin >> aStudent.firstName; 
  std::cout << "last name: ";
  std::cin >> aStudent.name; 
  std::cout << "index: ";
  std::cin >> aStudent.index; 
  std::cout << "\n";
  students.push_back(aStudent);
}

void Students::show() 
{
  for (it=students.begin(); it!=students.end(); ++it)
    std::cout << it->firstName  << " " << it->name  << ", " << it->index << "\n";
  std::cout << '\n';
}

void Students::sort() 
{
  students.sort(compare);
}

void Students::deleteS() 
{

  std::cout << "index: ";
  std::string ind; 
  std::cin >> ind; 
  for (it=students.begin(); it!=students.end(); ++it)
    if (it->index==ind) {
      it = students.erase(it);
      std::cout << "Record successfully deleted\n";
    }    
}

int main ()
{
  Students students;

  students.insert_("George", "Harrison", "144442");
  students.insert_("Paul", "McCartney", "131312");
  students.insert_("Ringo", "Starr", "145965");
  students.insert_("John", "Lennon", "140666");
  
  std::string answer = "";
  do {
      std::cout << "I=Insert new record  L=show the List  S=Sort by index  D=Delete by index  Q=Quit\n";
      std::cin >> answer; 
       
      if (answer== "I" || answer=="i") 
          students.insert_();
      else if (answer== "L" || answer=="l") 
          students.show();
      else if (answer== "S" || answer=="s") 
          students.sort();
      else if (answer== "D" || answer=="d") 
          students.deleteS();  

  }  while (answer!="Q" && answer!="q") ;
        
  std::cout << "\nend of the program\n";
 
  return 0;
}
=======
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
>>>>>>> a12cf5f16fb5445882a42407b19448a9fe9ea11c
