/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
   // Test for array items > 0
    while (n <= 0)
    {
        // Return false if non-positive integer
        return false;
    }

    //Implementing binary search algorithm
    
    int lower = 0;
    int upper = n - 1;
    
    // Test for value or move range 1 step up or down
    
    while (lower <= upper)
    {
        int middle = (upper + lower) / 2;
        if (values[middle] == value)
        {
            return true;
        }
        
        else if (values[middle] < value)
        {
            lower = middle + 1;
        }
        
        else if (values[middle] > value)
        {
            upper = middle - 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // Implementing an O(n^2) sorting algorithm - selection sort

    // Loop through the array
    
    for (int i = 0; i < (n - 1); i++)
    {
        int min = i;
        
        // Loop through array looking for lowest value
        
        for (int j = (i + 1); j < n; j++)
        {
            if (values[j] < values[(min)])
            {
                min = j;
            }
            
            if (min != i)
            {
                int swap = values[i];
                values[i] = values[j];
                values[j] = swap;
            }
        }
    }
}
