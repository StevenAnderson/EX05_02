#include <iostream>
using namespace std;
//creating template for function
template <typename T>
bool isSorted(const T list[],int size){
    
    int sorted=1;
    //for loop to cycle through array and check cells for sorted-ness
    for (int i=0;i+1<size;i++){
        //to check for opposite sort (from greatest to smallest) flip '>' sign
        if (list[i]>list[i+1])
            //sets variable->sorted to 0 if not sorted
        sorted=0;
        
    }
    if (sorted==0)
        //returns a false value if not sorted and outputs Not sorted
    {cout << "Is Not Sorted" << endl;

        return false;
    }
    
    else
        //returns a true value and outputs Is Sorted
    {cout << "Is Sorted" << endl;
        
        return true;
    }
}

int main (){
    //setting constant array size for test
    const int size=5;
    //int arrays (sorted and unsorted)
    int arrayint[size]={1,2,3,4,5};
    int arrayint2[size]={1,4,3,2,5};
    //double arrays (sorted and unsorted)
    double arraydoub[size]={1.2,3.4,5.6,7.8,9.01};
    double arraydoub2[size]={1.2,3.4,5.6,9.8,9.01};
    
    //string arrays (sorted and unsorted)
    string arraystr[size]={"a","b","c","d", "z"};
    string arraystr2[size]={"a","b","c","f", "d"};

    //calling the functions with test arrays
    isSorted(arrayint, size);
    isSorted(arrayint2, size);
    isSorted(arraydoub, size);
    isSorted(arraydoub2, size);
    isSorted(arraystr, size);
    isSorted(arraystr2, size);
    
    
    
    
    return 0;
    
}