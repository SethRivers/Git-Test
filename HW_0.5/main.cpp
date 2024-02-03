/**
 * @file main.cpp
 * @author Seth Rivers
 * @date 2024-02-01
 * @brief this program is dedicated to redoing questions 1, 2, 3 and 5 (or just 2 and
 * 3; with the first commit being the 1 and 5 version. I just tried to fit everything
 * into the one file for ease of access)
 * 
 * 
 */


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
/*
constint MAX_ARRAY = 1000;
*originally used for number 1 of HW0.5 (redoing 1 and 5 on the quiz)
*/

/**
 * A function that populates the array with 100 integars from the txt file "integars"
 *
 * @param int array[] A dynamic array designed to hold a predetermined number of integars.
 * @pre 
 * @return int 
 * @post 
 * 
 */
void populate(int array[], int length);


/**
 * a function that averages the integars inside the array.
 *
 * @param int array[] a Dynamic Array designed to hold a predetermined number of integars. 
 * @param int length the total amount of integars inside the array
 * @pre 
 * @post 
 * 
 */
float average(int array[], int length);


/**
 * a function that prints the contents of the array
 *
 * @param int array[] an array designed to hold a predetermined number of integars
 * @param int length the total amount of integars inside the array
 * @pre 
 * @return void 
 * @post 
 * 
 */
void print(int array[], int length);

//base code used for the original question 1 (1/5 quiz redo)
int main() {
  //HW0.5(question 2 and 3 redo) version of code  
  int *array;
  int length = 0;

  /*original line of code
  int array[MAX_ARRAY];
  */

  //added for Number 2 of HW0.5 (quiz redo 2/3)
  cout<<"Please insert an array size: ";
  cin>>length;
  cout<<"Thank you!"<<endl;
  
  cout<<"Declaring Array..."<<endl;
  array = new int[length]();
  
  cout<<"Populating array...";
  populate(array, length);
  cout<<"Done!\n"<<endl;
  
  cout<<"Printing array contents..."<<endl;
  print(array, length);
  cout<<"Done!\n"<<endl;

  cout<<"Printing Average..."<<endl;
  cout<<average(array, length)<<endl;
  cout<<"Done! Program Complete!"<<endl;

  delete[] array;
  array = NULL;
  
  return 0;
}

void populate(int array[], int length){
  ifstream file;
  file.open("integar.txt");
  for (int i = 0; i < length; i++){
    file >> array[i];
  }

  /* Original code for question 1(quiz redo1/5): 
     
     int i = 0;
     file>>array[i];
     while (file){
       i++;
       file>>array[i];
  }
  */  

  file.close();
}

float average(int array[], int length){
  float average = 0;
  for (int i = 0; i < length; i++){
    average += array[i];
    //adds everything from the array into a singular integar.
  }
  average /= length;
  //divides the average from the total
  
  return average; 
}

void print(int array[], int length){
  for (int i = 0; i < length; i++){
    cout<<array[i]<<endl;
  }
}
