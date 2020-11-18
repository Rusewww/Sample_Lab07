#include <stdbool.h>
#include <stdlib.h>
/**
 * @file main.c виконати завдання 1
 * 
 * виконати сортування масиву
 */

/**
 * сортування масиву методом "бульбашки"
 * @param n - розмір масиву;
 * @param arr - масив;
 * @param flag - флаг: true - від меншого до більшого, false - від більшого до меншого.
 */ 
 
/**
Функція main: Формує масив с заданої кількості елементів з випадковими значенями від -10 до 10. Викликає функцію sort_array.
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
/**
Функція sort_array: Сортує масив методом "бульбашки".Порядок залежить від значення змінної flag.
*/      
void sort_array(int n, int arr[], bool flag)
{ 
        for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - 1; j++) {
                        if (flag == true && arr[j] > arr[j + 1]) {
                                int tmp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = tmp;
                        }else if (flag == false && arr[j] < arr[j + 1]){
                                int tmp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = tmp;
                        }
                }
        }
}

