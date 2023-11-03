//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//    int size;
//    cout << "Enter size of the array: ";
//    cin >> size;
//    int* arr = new int[size];
//
//    for (int i = 0; i < size; i++) {
//        cout << "Enter arr[" << i << "]: ";
//        cin >> arr[i];
//    }
//
//    int allsum = 0;
//    for (int i = 0; i < size - 1; i++) {
//        int sum = arr[i] + arr[i + 1];
//        allsum += sum;
//    }
//
//    int mid = allsum / (size - 1);
//
//    cout << mid << endl;
//
//    // Не забудьте освободить выделенную память.
//    delete[] arr;
//
//    return 0;
//}







//Задача 2: Реализуйте алгоритм сортировки массива с использованием сортировки пузырьком. Выведите отсортированный массив.

//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//   
//    int size;
//    cout<<"Enter arr size : ";
//    cin>> size;
//    
//    int* arr = new int[size];
//    for (int i = 0 ; i< size; i++){
//        cout<<"Enter arr["<<i <<"] :";
//        cin>> arr[i];
//    }
//  
//    for (int i = 0 ; i<size; ++i){
//        for (int j = 0 ; j< size -1 - i; ++j){
//            if (arr[j]> arr[j+1]){
//                int temp = arr[j];
//                arr[j] = arr [j+1];
//                arr [j+1] = temp;
//                
//            }
//        }
//    }
//    
//    for (int i = 0 ; i< size; i++){
//        cout<<arr[i]<<endl;
//    }
//    
//    
//}






//Функции и рекурсия:

//Создайте функцию для вычисления факториала числа с использованием рекурсии.
//Напишите функцию для вычисления N-го числа Фибоначчи с использованием рекурсии.


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int factorial (int i ){
//    if (i ==0){
//        return 1;
//    } else {
//        return i* factorial(i-1);
//    }
//}
//
//
//int main(){
//    
//    int num;
//    
//    
//    cout<<"Введите число: ";
//    cin>> num ;
//    
//    int result = factorial(num);
//    cout << result<<endl;
//    
//    return 0;
//    
//}
//




//Задача 2: Напишите функцию fibonacci, которая принимает число n и возвращает N-е число Фибоначчи. Выведите это число на экран.

//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int fib(int num){
//    if(num == 0 ){
//        return 0;
//    }else if (num ==1){
//        return 1;
//    }else{
//            return fib(num-1)+fib(num-2);
//            
//        }
//        
//    }
//
//
//
//int main(){
//
//    cout<<"Введите число: ";
//    int num;
//    cin>> num;
//    
//    cout<<
//    
//}
//
//



//Работа с указателями и динамической памятью:
//
//Задача 1: Напишите программу, которая выделяет память для динамического массива целых чисел, заполняет его данными и выводит содержимое массива.
//Задача 2: Создайте функцию swap, которая принимает два указателя на переменные и обменивает их значениями. Выведите значения переменных до и после вызова функции.



//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main()
//{
//    int size;
//    
//    cout<<"Введите  размер массива: ";
//    cin >> size;
//    
//    int* arr = new int[size];
//    
//    for (int i =0 ; i<size ; i++){
//        cout<< arr[i]<<" ";
//    }
//    
//    cout<< endl;
//    return 0;
//    
//}





// ИГРА "ЖИЗНЬ"

#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

char** createField (int rows, int cols){
  char** arr =new char*[rows];
  for (int i = 0 ; i< rows; i++){
    arr[i] = new char [cols];
    for (int j = 0 ; j <cols ; j++){
      arr[i][j] ='-';
    }
  }
  return arr; ;
}

void printField( char** arr, int rows, int cols){
  for (int i = 0 ; i <rows; i++){
    for (int j = 0 ; j <cols; j++){
      cout<< arr[i][j]<< " ";
    }
    cout<<endl;
  }
}


void loadFile (char** arr, int rows, int cols, ifstream& file){
    int x,y;
    while (file>>x>>y){
        for (int i = 0; i<rows; i++){
            for (int j = 0 ; j< cols; j++){
                arr[x][y] = '*';
            }
        }
    }
}

void deleter (char** arr, int rows, int cols){
    for (int i = 0 ; i <rows; i++){
        delete [] arr[i];
    }
    delete [] arr;
}

char** getNext (char** arr, int rows, int cols){
    char** newGen = new char*[rows];
    for (int i = 0 ; i<rows; i++){
        for (int j = 0 ; j<cols; j++){
            
            int lifeCounter = 0;
            for (int dx =-1; dx<=1; dx++){
                for (int dy =-1; dy<= 1; dy++){
                    if (dx ==0 && dy ==0){continue;}
                    int nx = dx +i ;
                    int ny = dy +j;
                    if (nx>= 0&& nx < rows && ny >= 0 && ny< cols&& arr[nx][ny] =='*' ){
                        lifeCounter++;
                    }
                    
                    
                }
            }
            if (arr[i][j] == '*' && (lifeCounter == 2 || lifeCounter==3)){
                newGen[i][j] = '*';
            }  else if(arr[i][j] == '-' && lifeCounter==3){
                newGen[i][j] = '*';
            } else { newGen[i][j] ='*';}
        }
    }
    return newGen;
}




int main(){
    int rows, cols;
    
    ifstream file("in.txt");
    
    if(!file){
        cout<< " FAIL OPEN" ;
        return 1;
    }
    
    file>> rows >> cols;
    
    char** origField = createField(rows, cols);
    printField(origField, rows, cols);
    
    while (loadFile(origField, rows, cols, file))
}
