#include <iostream>
#include <string>
using namespace std;
const int M_PI = 3.14;
class kolo
{
	protected:
		int r;
	public:
		kolo(int promien=5): r(promien){}
		int getR(){return r;}
		double obwod() {return 2*M_PI*r;}
		double pole() {return M_PI*r*r;}
		
		kolo &operator--(int){
			kolo kopia= (*this);
			r--;
			return kopia;
		}
		
		kolo &operator--(){
			--r;
			return *this;
		}
	
		void operator+(int skalar){
			this->r=this->r+skalar;
		}
		
		friend bool operator!=(kolo ob1, kolo ob2);
		friend int srednica(kolo& ob1);
		
};


bool operator!=(kolo ob1, kolo ob2){
	if(ob1.r!=ob2.r){
		return true;
	}else{
		return false;
	}
}

int srednica(kolo& ob1){
		return ob1.getR()*2;
}


class walec : public kolo{
	protected:
		int h;
	public:
		walec(int R=5, int H=5) :kolo(R),h(H){};
		double objetosc(){return M_PI*r*r*h;}
		double pole() {return M_PI*r*r+2*M_PI*r*h;}
};


int main(){
	kolo p1(5);
	kolo p2(10);
	cout<<p1.pole()<<endl;
	cout<<srednica(p1)<<endl;
	p1+1;
	cout<<p1.pole()<<endl;
	p1--;
	cout<<p1.pole()<<endl;
	bool wynik = p1!=p2;
	cout<<wynik<<endl<<endl;
	
	
	walec p3(10);
	cout<<p3.pole()<<endl;
	cout<<srednica(p3)<<endl;
	cout<<p3.objetosc()<<endl;
}
