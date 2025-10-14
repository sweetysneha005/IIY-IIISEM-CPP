 /*#include<iostream>
using namespace std;

class parent {
	public:
		void display(){
			cout <<"this is parent class" <<endl;
		}
};
class child : public parent {
	public:
		void show(){
			cout <<"this is child class"<<endl;
		}
};
int main(){
	child obj;
	obj.display();
	obj.show();
	return 0;
	
}*/
/*#include<iostream>
using namespace std;

class parent1 {
	public:
		void display(){
			cout <<"this is parent1" <<endl;
		}
};
class parent2 : public parent1 {
	public:
		void show(){
			cout <<"this is parent2 "<<endl;
		}
};
class child : public parent2 {
	public:
		void run(){
			cout <<"this is child class "<<endl;
		}
};
int main(){
	child obj;
	obj.display();
	obj.show();
	obj.run();
	
}*/
/*#include<iostream>
using namespace std;

class parent {
	public:
		void display(){
			cout <<"                     this is parent" <<endl;
		}
};
class child1 : public parent {
	public:
		void show(){
			cout <<"||this is child1||* ";
		}
};
class child2 : public parent {
	public:
		void run1(){
			cout <<"||this is child2||* ";
		}
};
class child3 : public parent {
	public:
		void run2(){
			cout <<"||this is child3||* ";
		}
};
class child4 : public parent {
	public:
		void run3(){
			cout <<"||this is child4||* ";
		}
};
int main(){
	 
	child1 c1;
	child2 c2;
	child3 c3;
	child4 c4;

	 
	c1.display();
cout<<"      ^                    ^                      ^                 ^"<<endl;
cout<<"      |                    |                      |                 |"<<endl;
	c1.show(); 
	 
	c2.run1();
 
	c3.run2();	
	 
	c4.run3();

	return 0;
}*/
#include<iostream>
using namespace std;

class parent1 {
	public:
		 parent1(){
		 	cout<<"parent1 constructor called [1]"<<endl;
		 }
		 ~parent1(){
		 	cout<<"parent1 destructor called  [1]"<<endl;
		 }
};
class parent2 : public parent1{
	public:
		 parent2(){
		 	cout<<"parent2 constructor called [2]"<<endl;
		 }
		 ~parent2(){
		 	cout<<"parent2 destructor called  [2]"<<endl;
		 }
};
class child : public parent2 {
	public:
		 child(){
		 	cout<<"child constructor called  [3]"<<endl;
		 }
		 ~child(){
		 	cout<<"child destructor called   [3]"<<endl;
		 }
};
int main(){
	child obj;
		
}








