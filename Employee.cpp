#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
	
class Employee{
	
private:
	string employeeName, title;
	int id; 
	double salary, rating = 0;
	
	
public:
	Employee(string name, int i, string t, double s) : employeeName(name), title(t), id(i), salary(s){}
	
	//getters
	string get_name() const{
		return employeeName;
	}
	int get_id() const{
		return id;
	}
	string get_title() const{
		return title;
	}
	double get_salary() const{
		return salary;
	}
	double get_rating() const{
		return rating;
	}
	//setters
	void set_name(string name){
		employeeName = name;
	}
	void set_title(string t){
		title = t;
	}
	void set_salary(double s){
		salary = s;
	}
	void set_rating(double r){
		rating = r;
	}
};

int main(){
	Employee emp1("Ronin Baum", 123456, "Student", 36548.26);
	
	cout << "Name: " << emp1.get_name() << endl;
	cout << "ID: " << emp1.get_id() << endl;
	cout << "Title: " << emp1.get_title() << endl;
	cout << "Rating: " << fixed << setprecision(1) << emp1.get_rating() << endl;
	cout << "Salary: $" << fixed << setprecision(2) << emp1.get_salary() << endl;
	
	return 0;
}
