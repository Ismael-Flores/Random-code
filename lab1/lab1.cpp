//CSE 330-02
//Ismael Flores-Carlos 
//LAB 1
// Function receives two sorted arrays and computes the intersection of the two arrays. m is the number of elements in arr1[]. n is the number of elements in arr2[] //

#include <iostream>

using namespace std;



int printIntersection(int arr1[], int arr2[], int m, int n) 
{
	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (arr1[i] < arr2[j])
		  i++;
		else if (arr2[j] < arr1[i])
		  j++;
		else if (arr1[i] == arr2[j])
		{
		  cout << arr2[j] << " ";
		  i++;
		  j++;
		}
	}
	return 0;
}
int printUnion(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
    {
      if (arr1[i] < arr2[j])
	cout << arr1[i++] << " ";

      else if (arr2[j] < arr1[i])
	cout << arr2[j++] << " ";

      else
	{
	  cout << arr2[j++] << " ";
	  i++;
	}
    }
  while (i < m)
    cout << arr1[i++] << " " << endl;

  while (j < n )
    cout << arr2[j++] << " " << endl;

  return 0;
}
int main()
{
        int arr1[] = {-5, -5, -3, 0, 1, 1, 2, 3, 3, 4, 5, 9};
	int arr2[] = {-5, -3, -3, 0, 0, 1, 1, 2, 3, 5, 7, 8};

	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);

	printIntersection(arr1, arr2, m, n);
	printUnion(arr1, arr2, m, n);

	return 0;
}


		   
	

