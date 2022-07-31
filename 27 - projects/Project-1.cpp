//header files
#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

//function declaration

void project();
void addData();
void displayData();
void deleteData();
void getTrash();

//student class

class Student

{

		//member variable
		int admissionNo;
		char sname[20];
		char sgender;
		int std;
		float smarks;
		double spercentage;

		//member function
	public:

		void getData();
		void showData();
		int getAdmno() {

			return admissionNo;

		}
} s; // object of class student

//Main function

int main() {

	project(); // function call

	return 0;
}

//project function declaration

void project() {

	int ch;

	do

	{

		system("cls"); // clear screen

		cout << "**************STUDENT MANAGEMENT SYSTEM***************\n";

		cout << "1. Write Student Record\n";

		cout << "2. Read Student Record\n";

		cout << "3. Delete Student Record\n";

		cout << "4. Get Deleted Records\n";

		cout << "0. Exit\n";

		cout << "Enter your choice: ";

		cin >> ch;

		system("cls");

		switch (ch)

		{
			case 1:
				addData(); // add student data to file - stu.txt
				break;

			case 2:
				displayData();  // read data from file - stu.txt
				break;

			case 3:
				deleteData(); // remove data from - stu.txt and store in Trash.txt
				break;

			case 4:
				getTrash();  // add data from Trash.txt to stu.txt
				break;
		}

		system("pause");

	} while (ch);

}

void Student::getData() { // will get data from console

	cout << "\n\n*******Enter Student Data*******\n";

	cout << "Admission No.: ";
	cin >> admissionNo;

	cout << "Full Name: ";
	cin.ignore();
	cin.getline(sname, 20);

	cout << "Gender (M/F): ";
	cin >> sgender;

	cout << "Class: ";
	cin >> std;

	cout << "Total Marks (/500): ";
	cin >> smarks;

	cout << endl;

	spercentage = smarks * 100.0 / 500.00;

}

void Student::showData() { // will display the data to console

	cout << "\n\n*******Student Details*******\n";

	cout << "Admission No.: " << admissionNo << endl;

	cout << "Full Name: " << sname << endl;

	cout << "Gender: " << sgender << endl;

	cout << "Class: " << std << endl;

	cout << "Total Marks (/500): " << smarks << endl;

	cout << "Percentage: " << spercentage << endl;

	cout << endl;

}

void addData() {

	ofstream fout; // output stream

	fout.open("Stu.txt", ios::out | ios::app | ios::binary);// open file in append mode

	s.getData(); //get data from console

	//read( (char *) & s, sizeof(s));
	//write( (char *) & s, sizeof(s));

	// s - object to write data to file
	fout.write((char*)&s, sizeof(s)); // write data in file - Stu.txt

	fout.close(); // close the file - write in memory

	cout << "\n\n*******Data Successfully Saved to File*******\n";

}

void displayData() {

	ifstream fin; // input stream

	fin.open("Stu.txt", ios::in | ios::binary); // open file in input mode

	while (fin.read((char*)&s, sizeof(s))) { // read file

		s.showData(); // will show data on console

	}

	fin.close(); // close the file after operation

	cout << "\n\n******Data Reading from File Successfully Done*****\n";

}

void deleteData() { // delete data from file - stu.txt

	int n, flag = 0;

	ifstream fin;

	ofstream fout, tout;

	fin.open("Stu.txt", ios::in | ios::binary); // open Stu.txt in input mode

	fout.open("Temp.txt", ios::out | ios::app | ios::binary); // open Temp.txt in append mode

	tout.open("Trash.txt", ios::out | ios::app | ios::binary); // open Trash.txt in append mode

	cout << "Enter Admission Number : ";

	cin >> n;



	while (fin.read((char*)&s, sizeof(s))) { // read the file Stu.txt
		if (n == s.getAdmno()) {

			cout << "This Record " << n << " has been sent to Trash:\n";

			s.showData(); // display the content on console

			tout.write((char*)&s, sizeof(s)); // write data to TRASH.txt

			flag++;

		}

		else {

			fout.write((char*)&s, sizeof(s)); // write data to TEMP.txt

		}

	}

	fout.close();

	tout.close();

	fin.close();

	//close all files

	if (flag == 0) // if no record found
		cout << "   " << n << "No Record found*****\n\n";

	remove("Stu.txt"); // delete Stu.txt

	rename("Temp.txt", "Stu.txt"); // rename temp.txt - Stu.txt

}

void getTrash()

{

	ifstream fin; // open file in input mode

	fin.open("Trash.txt", ios::in | ios::binary);

	while (fin.read((char*)&s, sizeof(s))) { // read data from file

		s.showData(); // display data on console

	}

	fin.close(); // close file

	cout << "\n\n*******Data Reading from Trash File Successfully Done*****\n";

}

