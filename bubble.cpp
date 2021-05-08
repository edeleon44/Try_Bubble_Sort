 /*
 * @author Edward DeLeon Jr
 * @Description Assignment 2:Bubble Sort
 *
 * @Version 1.3
 * @Date 01/24/2021
 */

#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;

int main() {
    int random[25];
    int i;
    int j;
        
    /*
        *For loop: generate random number btw 1-25
        * Assign to elements of array random
    */
    for(i=0; i<=24;i++) {
        random[i] = rand() % 26;
    }
    
    /*
        * Nested for loop for bubble sorting: ascending.
        * We want j interation to be  i+1 => it would make * it out of bounds err.
        * Used array: fixed number of elements
     */
    for(i=0;i<=25;i++) {
        for(j=i+1;j<26;j++) {
            int temp;
            
            if(random[i] > random[j]) {
                temp = random[i];
                random[i] = random[j];
                random[j] = temp;
            }
        }
    }
    
    // For loop: display random[i] contents foreach itiration
    for(i=0;i<=24;i++) {
        cout << "random elements: " << random[i] << "\n";
    }
    return 0;
}
