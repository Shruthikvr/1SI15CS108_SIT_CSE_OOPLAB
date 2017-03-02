#include <iostream>
#include <iomanip>
using namespace std;


class Complex
{
	private:
		int iRealp;
		int iImagp;

	public:
		void getData(void);
		void addComplex(Complex , Complex);
		//void addComplex(Complex a, Complex b);
		void subtractComplex(Complex , Complex);

};


/*void dosomething(void)
{


}*/
void Complex :: getData(void)
{
	cout << "Enter real and imaginary parts of the Complex Number" << endl;
	cin >> iRealp >> iImagp;
}

void Complex :: addComplex(Complex a, Complex b)
{
	Complex sum;
	sum.iRealp = a.iRealp + b.iRealp;
 	sum.iImagp = a.iImagp + b.iImagp;

	cout << "\nSum is" << sum.iRealp << "+i" << sum.iImagp << endl;
}
void Complex :: subtractComplex(Complex a, Complex b)
{
	Complex diff;
	diff.iRealp = a.iRealp - b.iRealp;
 	diff.iImagp = a.iImagp - b.iImagp;

	cout << "\nDifference is" << diff.iRealp << "+i" << diff.iImagp << endl;
}

//int main(int argc, char **argv)
int main(void)
{
	Complex c1,c2;

	c1.getData();
	c2.getData();

	c1.addComplex(c1,c2);

	c1.subtractComplex(c1,c2);

	cin.get();
	return 0;
}

