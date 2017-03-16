#include "Student.h"

// Constructors
Student::Student()
{
	id_number = 0;
	first_name = "";
	last_name = "";
}
Student::Student(int _id_number, string _first_name, string _last_name)
{
	id_number = _id_number;
	first_name = _first_name;
	last_name = _last_name;
	enrolled_courses[] = 0;
}
Student::Student(Student & _person)
{
	id_number = _person.GetID();
	first_name = _person.GetFirstName();
	last_name = _person.GetLastName();
}
Student::~Student()
{
	delete[] enrolled_courses;
}

// Getters
const int Student::GetID()
{
	return id_number;
}
const string Student::GetName()
{
	string name = last_name + ", " + first_name;
	return name;
}
const string Student::GetFirstName()
{
	return first_name;
}
const string Student::GetLastName()
{
	return last_name;
}

// Methods
bool Student::isEnrolled(const string & CourseName)
{
	
	return false;
}
bool Student::enroll(const Course & C)
{
	return false;
}
bool Student::recordGrade(const Course & C)
{
	return false;
}
const int Student::hoursCompleted()
{
	return 0;
}
const float Student::GPA()
{
	return 0.0f;
}

ostream & operator << (ostream & out, Student & s)
{
	out << s.GetID() << "  " << s.GetFirstName() << " " << s.GetLastName() << endl;
	
}

istream & operator >> (istream & in, const Student & s)
{
	int id; 
	string first, last; 
	int number_of_courses;
	string course_name; 
	int credits; 
	float grade;

	in >> id >> first >> last >> number_of_courses;
	for (int i = 0; i < number_of_courses; i++)
	{
		in >> course_name >> credits >> grade;
		
	}
}