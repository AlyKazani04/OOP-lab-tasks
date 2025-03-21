#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

class Fraction{
	private:
		int nume;
		int denom;
	public:
		Fraction(){};
		Fraction(float x, float y) : nume(x), denom(y) {
			float g = __gcd(nume, denom);
			nume /= g;
			denom/= g;
			cout<<"Fraction: "<<nume<<" / "<<denom<<endl;
		}
		Fraction operator+(const Fraction& other){
			int temp_nume = nume * other.denom + other.nume* denom;
			int temp_denom = denom * other.denom;
			Fraction temp(temp_nume, temp_denom);
			return temp;
		}
		Fraction operator-(const Fraction& other){
			int temp_nume = nume * other.denom - other.nume* denom;
			int temp_denom = denom * other.denom;
			Fraction temp(temp_nume, temp_denom);
			return temp;
		}
		Fraction operator*(const Fraction& other){
			int temp_nume = nume * other.nume;
			int temp_denom = denom * other.denom;
			Fraction temp(temp_nume, temp_denom);
			return temp;
		}
		Fraction operator/(const Fraction& other){
			int temp_nume = nume * other.denom;
			int temp_denom = denom * other.nume;
			Fraction temp(temp_nume, temp_denom);
			return temp;
		}
		bool operator==(const Fraction& other){
			if(nume == other.nume && denom == other.denom){
				return true;
			}
			return false;
		}
		bool operator!=(const Fraction& other){
			if(nume == other.nume && denom == other.denom){
				return false;
			}
			return true;
		}
		bool operator<(const Fraction& other){
			if(nume/denom < other.nume/other.denom){
				return true;
			}
			return false;
			
		}
	};

int main(int argc, char** argv){
	Fraction f(8,12);
	Fraction f2(5,6);
	bool d = f2 < f;
	cout<<d;
	
	return 0;
}
