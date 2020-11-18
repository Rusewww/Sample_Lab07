#include <stdbool.h>
#include <stdlib.h>
/**
 * @file main.c виконати завдання 1
 * 
 * виконати сортування масиву
*/

/**
 * сортування масиву методом "бульбашка"
 * @param n розмір масиву
 * @param arr масив
 * @param flag флаг true - від меншого до більшого, false - від більшого до ме$
 */ 
void sort_massive(int n, int arr[], bool flag);
 
/**
головна функція  {створити масив,
                  заповнити масив випадковими числами у інтервалі (-10;10),
                  виконати сортування масиву}
*/
int main()
{
 /**
 * кількість елементів масиву
 */ 
        #define N 5
        int arr[N];
        for (int i = 0; i < N; i++) {
        
                arr[i] = rand() % 21 - 10;
        }
        sort_array(N, arr, true);
return 0;
}
        
void sort_array(int n, int arr[], bool flag)
{

        for(int i=0; i < n - 1; i++) {
                for(int j = 0; j < n - 1; j++) {
                        if(flag==true && arr[j] > arr[j + 1]) {
        
                                int tmp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = tmp;
                        } else if(flag==false && arr[j] < arr[j + 1]) {
                                int tmp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = tmp;
                        }

                }
        }

}

