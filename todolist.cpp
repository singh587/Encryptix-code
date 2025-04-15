#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string name;
    bool isCompleted; 
};

int main() {
    vector<Task> tasks; 
    int choice;

    while (true) {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Task newTask;
            cout << "Enter task: ";
            cin.ignore();
            getline(cin, newTask.name);
            newTask.isCompleted = false;
            tasks.push_back(newTask);
            cout << "Task added!\n";
        } 
        else if (choice == 2) {
            if (tasks.empty()) {
                cout << "No tasks available.\n";
            } else {
                cout << "Your Tasks:\n";
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i].name << " - ";
                    cout << (tasks[i].isCompleted ? "Completed" : "Pending") << endl;
                }
            }
        }
        else if (choice == 3) {
            if (tasks.empty()) {
                cout << "No tasks available to mark as completed.\n";
            } else {
                int taskNum;
                cout << "Enter task number to mark as completed: ";
                cin >> taskNum;
                if (taskNum > 0 && taskNum <= tasks.size()) {
                    tasks[taskNum - 1].isCompleted = true;
                    cout << "Task marked as completed!\n";
                } else {
                    cout << "Invalid task number.\n";
                }
            }
        } 
        else if (choice == 4) {
            if (tasks.empty()) {
                cout << "No tasks to delete.\n";
            } else {
                int taskNum;
                cout << "Enter task number to delete: ";
                cin >> taskNum;
                if (taskNum > 0 && taskNum <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskNum - 1);
                    cout << "Task deleted!\n";
                } else {
                    cout << "Invalid task number.\n";
                }
            }
        } 
        else if (choice == 5) {
            cout << "Exiting To-Do List. Goodbye!\n";
            break;
        } 
        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
