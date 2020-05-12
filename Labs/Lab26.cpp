/**
 * @author  Raul Aguilar
 * @date    May 12, 2020
 * CS 150 1686 Lab 26: Bubble sort
 */
#include <iostream>

using namespace std;

const int ARR_SIZE = 10;

void bSort(double ar[]);

int main()
{

  double nums[ARR_SIZE];

  for(int i =0; i < ARR_SIZE; i++)
    {
      cout << "Enter value " << i+1 << " of " << ARR_SIZE << " to be sorted: ";
      cin >> nums[i];
      cout << endl;
    }

  cout << endl << endl << "Sorting values." << endl << endl;

  bSort(nums);

  cout << "Sorted values are: ";
  for(int i = 0; i < ARR_SIZE; i++)
    {
      cout << endl << nums[i];
    }

  cout << endl << endl;

  return 0;
}

void bSort(double ar[]) {
    double temp = 0;
    bool flag = false;
    
    do {
        flag = false; //lower flag at start of new pass through array

        for(int i = 0; i < ARR_SIZE - 1; i++) {
	        if(ar[i] > ar[i+1]) {
                flag = true;

                //swap
	            temp = ar[i];
	            ar[i] = ar[i+1];
	            ar[i+1] = temp;
	        }
	    }
    } while(flag);
}