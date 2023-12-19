#include <iostream>
#include <string> 

#include "vihicle.h"
  
 #include "AirVihicle.h"
     #include "Broom.h"
     #include "Eagle.h"
     #include "Flycarpet.h"

  #include "Landvihicle.h"
     #include "fastCamel.h"
     #include "Boots.h"
     #include "Camel.h"
     #include "Centaur.h"
     #include "fastCamel.h"
  

#include "Race.h"
  #include "LandRace.h"
  #include "AirRace.h"
  #include "MixRace.h"

using namespace std;



void RegisterVihicle (Vihicle** &racerArray , Vihicle* newVihicle , int capicity, int &racerCount){
	Vihicle** newArray = new Vihicle*[racerCount + 1];
    for (int i = 0; i < racerCount; ++i) {
        newArray[i] = racerArray[i];
    }
    newArray[racerCount] = newVihicle;
    delete[] racerArray; // Удаляем старый массив
    racerArray = newArray; // Обновляем указатель
    ++racerCount;
}

void ShowRegisteredVehicles(Vihicle** racerArray, int racerCount) {
    for (int i = 0; i < racerCount; ++i) {
        cout << i + 1 << ". " << racerArray[i]->getName() << endl; // Предполагается, что у класса Vehicle есть метод GetName()
    }
}


int main() {
	
	double distance;
	int pCMD;
	int p_v_c;
	VihicleType choose;
	int capicity;
	

	

	cout<< "Welcome to Rabbits Race !\n1. Race for Land vehicles \n2. Race for Air vehicles \n3. Unlim Race";
	cout << "\nChoose race type: ";
	cin >> p_v_c ; 
	cout<< "Enter the distance (has to be positive) : " ; 
	cin >> distance ; 
	Vihicle** racersArray = nullptr;
	
	int racerCount = 0 ;

	   do {
        cout << "Minimum count of racers is 2!" << endl;
        cout << "1. Register vehicle." << endl;
        cout << "Choose action: ";
        cin >> pCMD;
        
        if (pCMD == 1) {

			AirRace air_race(3);

            cout << "Choose a vehicle to register:" << endl;
            cout << "1. Broom" << endl;
            cout << "2. Boots" << endl;
           
            cout << "Enter your choice: ";
            int vehicleChoice;
            cin >> vehicleChoice;
            
            Vihicle* newVihicle = nullptr;
            switch (vehicleChoice) {
                case 1:
                    newVihicle = new Broom; // Здесь должен быть вызов конструктора для Метлы
                    break;
                case 2:
                    newVihicle = new Flycarpet; // Здесь должен быть вызов конструктора для Ботинок
                    break;
                // Другие ТС...
				case 3:
				    newVihicle = new Eagle;
					break;
                default:
                    cout << "Incorrect vehicle number!" << endl;
                    continue;
            }
            
            air_race.recerRegistr(newVihicle);
            cout << "Vehicle registered successfully!" << endl;
            ShowRegisteredVehicles(racersArray, racerCount);
        }
    } while (racerCount < 2 || pCMD != 0); 
    



}







// 	  while (pCMD != 1 ){
// 		cout<< "Minimum cout of racers = 2 !" << endl; 
// 	    cout<< "1. Registrate trasport ."<< endl; 
// 	    cout<< "Choose action : ";
// 		cin>> pCMD; 
// 		if(pCMD != 1){
// 			cout<<"\nIncorrect action ! Please choose available variants ";
//         }
// 	  }

// //AirType
// 	if (p_v_c == 2 ){
// 		capicity = 2;
// 		Vihicle **racersArray = new Vihicle*[capicity];
		
		

// 		while ( p_v_c !=0 && choose == VihicleType::Air){
// 			for(int i = 0; i<capicity ; i++){
// 		      if (i ==0) {
// 				 cout<<"Air race. Distance: "<< distance<<endl;
// 				 cout<< "1. Magic boots \n2. Broom \n3. Camel \n4.Centaur \n5.Eagle \n6.Fast Camel \n7.Fly Carpet \n0. End registration"<< endl;
// 				 cin>>v_choose;

// 		        racersArray[racerCount] = new AirVehicle(distance);; 
// 	   } else {
// 		cout<< " Registrated vegicles : "; 
// 		    for (int n = 0 ; n<= i ; n++){
// 			    cout<< racersArray[racerCount+1];
// 		    }
// 		    cout<<"Air race. Distance: "<< distance<<endl;
// 			racersArray = new Vihicle* [racerCount + 1]; 
// 		    racersArray[racerCount] = new AirVihicle(distance); 
     
// 	         }	
// 	      }
// 	   }
// 	}

// //LandType
//     else if(choose==VihicleType::Land){

// 	}

// //Unlim
    
	


// }



