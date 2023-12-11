#include <iostream>
#include <string> 
using namespace std;

int main() {


	int length;
	cout << "Enter the distance (meters): ";
	cin >> length;

	int v_num;
	int* race_list = new int[100];
	int v_count =0 ;

	while (v_count <100) {
		cout << "Enter vihicle number ( or 0 to exit): ";
		cin >> v_num;
		if (v_num == 0 ) {
			break;
		}
		race_list[v_count] = v_num;
		v_count++;
	}

	cout << "Race member-list: " << endl;
	for (int i = 0; i < v_count; i++) {
		cout << i+1 << ". Vehicle " << race_list[i] << endl;
	}

	delete[] race_list;
}