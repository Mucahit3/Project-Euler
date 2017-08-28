#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

	ifstream input("numbers.txt");

	int i = 0;

	string sayi[19];

	while (!input.eof()){
		input >> sayi[i];
		cout << sayi[i] << endl;
		i++;
	}




	


	input.close();

}