#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Course
{
	string course_name;
	int credit_hours;
	float grade_points;
};

class Student
{
private:
	int id_number;
	string first_name;
	string last_name;
	string * enrolled_courses;
public:
	Student(); // default constructor
	Student(Student & _person); // copy constructor
	Student(int _id_number, string _first_name, string _last_name); // defined constructor
	~Student();
	
	const int GetID(); // getter for id_number
	const string GetName(); // getter for first_name and last_name
	const string GetFirstName(); // getter for first name
	const string GetLastName(); // getter for last name

	bool isEnrolled(const string& CourseName); // returns bool value depending on if student is enrolled
	bool enroll(const Course& C); // changes bool value to the student being enrolled in a specific course
	bool recordGrade(const Course& C); // records grade if student is enrolled, then return true - else, return false

	const int hoursCompleted(); // returns the number of credit hours for courses that have grades recorded
	const float GPA(); // compute student's GPA and return that value

	friend ostream & operator << (ostream & out, Student & s);
	friend istream & operator >> (istream & in, const Student & s);
};