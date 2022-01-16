
#include "TodoList.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


    /*
    *   Adds an item to the todo list with the data specified by the string "_duedate" and the task specified by "_task"
    */
    void TodoList::add(string _duedate, string _task){
			cout << "In add" << _duedate << " " << _task << " " << endl;
			tasks.push_back(_duedate + " " + _task);
		}
	

    /*
    *   Removes an item from the todo list with the specified task name
    *
    *   Returns 1 if it removes an item, 0 otherwise
    */
    int TodoList::remove(string _task) {
			cout << "In remove" << " task: " << _task << endl;
			for(int i = 0; i < tasks.size(); i++) {
				int firstSpace = tasks[i].find(" ");
				string rmTask = tasks[i].substr(firstSpace + 1);
				if(rmTask.compare(_task) == 0) {
					tasks.erase(tasks.begin() + i);  
					// for (int i = ; i < 8; ++i){
					// 	array[i] = array[i + 1];
					// }
				}
			}
		}

    /*
    *   Prints out the full todo list to the console
    */
    void TodoList::printTodoList() {
			cout << "In Print to do list" << endl;
			for(int i = 0; i < tasks.size(); i++) {
				cout << tasks[i] << endl;
			}
		}
    
    /*
    *   Prints out all items of a todo list with a particular due date (specified by _duedate)
    */
    void TodoList::printDaysTasks(string _date) {
			cout << "In Print days task " << endl;
			for(int i = 0; i < tasks.size(); i++) {
				int firstSpace = tasks[i].find(" ");
				string day = tasks[i].substr(0,firstSpace);
				if(day.compare(_date) == 0) {
					cout << tasks[i] << endl; 
				}
			}
		}