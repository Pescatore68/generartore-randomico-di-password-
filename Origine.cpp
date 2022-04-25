#include <iostream>
#include <time.h>
using namespace std;


int main() {
	char ListaAlfaNum[] = { '1','2','3','4','5','6','7','8','9','0','z','x','c','v','b','n','m','a','s','d','f','g','h','j','k','l','q','w','e','r','t','y','u','i','o','p','Z','X','C','V','B','N','M','A','S','D','F','G','H','J','K','L','Q','W','E','R','T','Y','U','I','O','P' };
	char InsiemeChar[] = { '1','2','3','4','5','6','7','8','9','0','z','x','c','v','b','n','m','a','s','d','f','g','h','j','k','l','q','w','e','r','t','y','u','i','o','p','Z','X','C','V','B','N','M','A','S','D','F','G','H','J','K','L','Q','W','E','R','T','Y','U','I','O','P','=','-','_','+','[',']','{','}',';','(',')','/','?','<','>',',','.','|','!','#','$','%','^','&','*' };
	char YN;
	int Input;
	srand(time(NULL));
	cout << "inserire la lunghezza desiderata: ";
	cin >> Input;
	cout << "desidera una password con caratteri speciali? se sì premere 'Y', se no premere 'N' ";
	cin >> YN;
	if (YN == 'N') {
		for (int i = 0; i < Input; i++) {
			cout << ListaAlfaNum[rand() % 62 + 0];
		}
	}else {
			if (YN == 'Y') {
				for (int i = 0; i < Input; i++) {
					cout << InsiemeChar[rand() % 87 + 0];
				}
			}
	}
	return 0;
}