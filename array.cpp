#include"iostream"

using namespace std;

int main(){
	
	int int_arr[4] = {1,2,3,4};
	
	cout << int_arr[5] <<endl;
	
	int another_arr[4];
	another_arr[0]= 9;
	
	cout << another_arr[2] <<endl;
	
	*another_arr  = 29;
	cout << another_arr[0] <<endl;
	
	
	return 0;
}
