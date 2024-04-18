#include <iostream>
#include <string>


using namespace std;


int* apply_all (int *array1, size_t dim1, int *array2, size_t dim2){
    int *array3 {};
    int count = 0;
    array3 = new int[dim1*dim2];
    for (size_t i=0; i<dim1; i++){
        for(size_t j=0; j<dim2; j++){
            *(array3 + count) = array1[i]*array2[j]; //or array3[count]
            count++;
        }
    }
    return array3;
} 


int main()
{ 
    int array1 [] {1,2,3,4,5};
    int array2 [] {10, 20, 30};

    
    int *final_array=apply_all(array1, 5, array2, 3);
    
    for (size_t i=0; i<15; i++){
        cout << final_array[i] << endl;
    }
    
    delete [] final_array;
    
    
	return 0;
}
