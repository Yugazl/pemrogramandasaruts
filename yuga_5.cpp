#include <iostream>
using namespace std;

int main()
{
	int nilai;
	cout<<"masukan nilai";
	cin>>nilai;
	if (nilai > 92) {
		cout<<"A";
	}else if (nilai > 87) {
		cout<<"AB";
	}else if (nilai > 83) {
		cout<<"B";
	}else if (nilai > 79) {
	    cout<<"C";
	}else if (nilai <= 79) {
	    cout <<"D";
    }
    return 0;
}
