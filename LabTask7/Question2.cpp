#include <iostream>
#include <vector>
using namespace std;

class Polynomial{
	private:
		vector<int> coeff;
	public:
		Polynomial(){}
		Polynomial(vector<int> &c) : coeff(c) {}
		Polynomial operator+(const Polynomial& other){
			Polynomial temp;
			
		}
		
};

int main(int argc, char** argv){
	return 0;
}
