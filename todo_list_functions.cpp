#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include "todo_list_functions.h"
using namespace std;

vector<string> tasks;

void showVector(vector<string> tasks){
  int option;
  cout << "Your tasks are:" << endl;
   for (const string& task : tasks) {
        cout << "- " << task << endl;
   }
  cout << "Press 4 to Exit ";
  cin >> option;
  if(option == 4){
    display_options();
  }

}

void add_new_task(){
  string newTask;
  int option;
  cout << "Write your new Task  ";
  cin.ignore();
  getline(cin, newTask);
  cout << "Congrats you add a new Task: " << newTask << endl;
  tasks.push_back(newTask);
  cout << "Press 4 to exit ";
  cin >> option;
  if(option == 4){
    display_options();
  }
}

void mark_as_done() {
    int option;
    int option2;
    cout << "Select the task number you want to mark as done:" << endl;
   cout << "Your tasks are:" << endl;
   for (const string& task : tasks) {
        cout << task << endl;
   }
  cout << "Enter the number of the task: ";
    cin >> option;
    if (option >= 1 && option <= tasks.size()) {
        cout << "Marking task as done: " << tasks[option - 1] << endl;
        tasks.push_back("✔️");
        cout << "Press 4 to exit ";
        cin >> option2;
     if(option2 == 4){
      display_options();
    }
  } else {
        cout << "Invalid task number." << endl;
    }
}


void greeting(){
    cout << "**************************************************" << endl;
    cout << "*                  ToDo List Menu                *" << endl;
    cout << "**************************************************" << endl;
}
void display_options(){
    int choice;
    cout << "\nEnter a choice from 1 to 4\n";
    cout << "1. View Tasks" << std::endl;
    cout << "2. Add Task" << std::endl;
    cout << "3. Mark Task as Done" << std::endl;
    cout << "4. Exit" << std::endl;
    cout << "**************************************************" << endl;
   cin >> choice;
  switch (choice) {
     case 1: 
     showVector(tasks); 
    break;
  
    case 2:
    add_new_task();
    break;

   
   case 3: 
   mark_as_done();
   break;


  case 4:
  cout << "You select exit " << endl;
  break;

  } while(choice != 4);
   
}
