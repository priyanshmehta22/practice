#include<iostream>
using namespace std;
class employee{
	int empid;
	friend void friendofemp(employee &e);
};
void friendofemp(employee &e){
	e.empid=1000;
	cout<<e.empid;
}
int main(){
	employee e1;
	friendofemp(e1);
	return 0;
}
