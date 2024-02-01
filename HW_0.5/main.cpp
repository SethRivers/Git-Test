/**
 * @file main.cpp
 * @author Seth Rivers
 * @date 2024-02-01
 * @brief this branch is dedicated to redoing questions 1 and 5
 * 
 * 
 */


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_ARRAY = 1000;


/**
 * A function that populates the array with 100 integars from the txt file "integars"
 *
 * @param int array[] an array designed to hold a predetermined number of integars.
 * @pre 
 * @return int 
 * @post 
 * 
 */
int populate(int array[]);


/**
 * a function that averages the integars inside the array.
 *
 * @param int array[] an array designed to hold a predetermined number of integars. 
 * @param int total the total amount of integars inside the array
 * @pre 
 * @return float 
 * @post 
 * 
 */
float average(int array[], int total);


/**
 * a function that prints the contents of the array
 *
 * @param int array[] an array designed to hold a predetermined number of integars
 * @param int total the total amount of integars inside the array
 * @pre 
 * @return void 
 * @post 
 * 
 */
void print(int array[], int total);
	   
int main() {
  int array[MAX_ARRAY];
  cout<<"Populating array...";
  int total = populate(array);
  cout<<"Done!\n"<<endl;
  
  cout<<"Printing array contents..."<<endl;
  print(array, total);
  cout<<"Done!\n"<<endl;

  cout<<"Printing Average..."<<endl;
  cout<<average(array, total)<<endl;
  cout<<"Done! Program Complete!"<<endl;
  
  return 0;
}

int populate(int array[]){
  ifstream file;
  file.open("integar.txt");

  int i = 0;
  file>>array[i];
  while (file){
    i++;
    file>>array[i];
  }
  file.close();

  return i;
}

float average(int array[], int total){
  float average = 0;
  for (int i = 0; i < total; i++){
    average += array[i];
    //adds everything from the array into a singular integar.
  }
  average /= total;
  //divides the average from the total
  
  return average; 
}

void print(int array[], int total){
  for (int i = 0; i < total; i++){
    cout<<array[i]<<endl;
  }
}
