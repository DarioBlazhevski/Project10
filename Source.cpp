#include <iostream>

using namespace std;

int main()
{

	int x;

	cout << "\n*****************************";
	cout << "\n**          MENU           **";
	cout << "\n*****************************";
	cout << "\n*                           *";
	cout << "\n*    1. Kvadrat             *";
	cout << "\n*    2. Triagolnik          *";
	cout << "\n*    3. Krug                *";
	cout << "\n*                           *";
	cout << "\n*****************************";


	cout << "\nVnesi broj od menito : ";

	cin >> x;

	switch(x){
	
	case 1:
		cout << "\n*******";
		cout << "\n*******";
		cout << "\n*******";
		
		break;

	case 2:
		cout << "\n     *  ";
		cout << "\n    * *  ";
		cout << "\n   * * *  ";
		cout << "\n  * * * *  ";
		break;

	case 3:
		cout << "\nKrug, ne ti crtam krug";
		break;

	
	default:
		cout << "\nVneseniot broj ne postoi na menito ";
	
	}





	cin.get(); cin.get();

	return 0;
}