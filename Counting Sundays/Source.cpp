#include <iostream>

using namespace std;

enum gunler{ pazartesi, sali, carsamba, persembe, cuma, cumartesi, pazar };
enum aylar{ ocak, subat, mart, nisan, mayis, haziran, temmuz, agustos, eylul, ekim, kasim, aralik };

bool artikYil(int);

int main(){


	int yil;
	int day;
	int g;
	int sayac = 0;

	gunler gun = sali;
	aylar ay;

	for (yil = 1901; yil <= 2000; yil++){

		for (ay = ocak; ay <= aralik; ay = static_cast<aylar>(ay + 1)){

			if (ay == eylul || ay == kasim || ay == haziran || ay == nisan) 
				day = 30;

			else if (ay == subat){
				if (artikYil(yil))
					day = 29;
				else
					day = 28;
			}
			else
				day = 31;
			

			for (g = 0; g < day; g++){

				//cout << gun; break;

				if (g == 0){
					if (gun == pazar)
						sayac++;
				}

				gun = static_cast<gunler>(gun + 1);
				gun = static_cast<gunler>(gun % 7);
			}
		}
	}
	
	cout << sayac - 1;
	cout << endl;
	//system("PAUSE");

}

bool artikYil(int yil){

	if (yil % 4 == 0){

		if (yil % 400 != 0)
		{
			return false;
		}
		
		return true;
	}
	
	return false;
}