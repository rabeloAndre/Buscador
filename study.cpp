#include <iostream> // input and output
// #include <iomanip>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
// #include <math.h>
#include <queue>
#include <sstream>
#include <time.h>
#include "myFunctions.h"


using namespace std;


// ****************************************************************************************
// // BASIC OF C++


// #define SIZE 8

// int main(){

// 	// string mystr("12");
// 	// float myint;
// 	// stringstream(mystr) >> myint; //Convert string to int or to float
// 	// cout << mystr << " " << myint+1.6;

// 	return 0;
// }


// ****************************************************************************************
// // SIMPLE VECTOR


// int main(){
//     int tam;

//     cout << "Number of vector elements: ";
//     cin >> tam;

//     int* pNum = new int[tam]; // Create Vector
//     // int pNum[tam]; // Create vector

//     integerVector(pNum, tam);

//     for (int i = tam - 1; i >= 0; i--)
//     {
//         cout << * (pNum + i) << endl;
//     }

//	   delVector(pNum);

// }


// ****************************************************************************************
// // I/O - INCOMPLETE!!!!!!


// #define SIZE 8

// int main(){
// 	// char a;
// 	// a = cin.get();

// 	char name[4];
// 	cout << "Enter your name: ";
// 	// cin >> name; //Reads up to the 1st blank  only
// 	// cin.get(name,SIZE); //Reads up to the character size-1 or <Enter>
// 	cin.getline(name,SIZE); //Remove the delimiter from the buffer automatically
// 	// cin.putback('x'); //Put the last character read back into the buffer

// 	char surname[6];
// 	cout << "Enter your surname: ";
// 	// cin.get(surname,SIZE);
// 	cin.getline(surname,SIZE);

// 	cout << "Name: " << name << " Surname: " << surname;

//  string str;
//  int sizeStr;
//  getline(cin,str);

//  sizeStr = (str.size()/2)+1;
//  int* pInt = new int[sizeStr];
//  for (int i = 0, j = 0; j < sizeStr; i+=2, j++)
//  {
//  	// cout << j << " " << str[i] << " " << i << endl;
//  	pInt[j] = str[i] - '0';
//  }
//  for (int i = 0; i < sizeStr; ++i)
//  {
//  	cout << pInt[i] << endl;
//  }

//  delete[] pInt;
//  pInt = NULL;

// 	return 0;
// }


// ****************************************************************************************
//  MULTIPLE VALUES IN THE SAME LINE


// int main(){
	// int TAM = 5;
	// int *vet = new int[TAM];

	// for (int i = 0; i < TAM; ++i)
	// {
	// 	cin >> vet[i];
	// }

	// for (int i = 0; i < TAM; ++i)
	// {
	// 	cout << vet[i];
	// }

	// delete[] vet;

	// return 0;
// }


// ****************************************************************************************
// // MATRIX


// int main(){
//     int m, n;

//     cout << "Number of strings: ";
//     cin >> m;
//     cout << "Maximum number of characters: ";
//     cin >> n;

//     char pNum[m][n] = {};
// //  char* pNum[2][6] = {"andre","rabelo"};

//     for (int i = 0; i < sizeof(pNum)/sizeof(pNum[0]); i++){
//         cout << "Enter a string: ";
//         cin >> pNum[i];
//     }

//     for (int i = 0; i < (sizeof(pNum)/sizeof(pNum[0])) - 1; i++){
//         cout << pNum[i];
//     }

//	   delVector(pNum);
		
//	   return 0;
// }


// ****************************************************************************************
// // STRUCT WITH CONSTRUCTOR AND GET E SET METHODS


// typedef struct People{
// private:
// 	char *name= new char[2];
// 	int age;

// public:
// 	People (const char *name, int age){
// 		setName(name);
// 		setAge(age);
// 	}

// 	void setName(const char *name){
// 		this->name = (char*) name;
// 	}

// 	void setAge(int age){
// 		this->age = age;
// 	}

// 	char *getName(){
// 		return this->name;
// 	}

// 	int getAge(){
// 		return this->age;
// 	}

// } people;


// void del(people *vector);


// int main(){
// 	people *p = new people("Andre",19);

// 	cout << p->getName() << " have " << p->getAge() << " years." << endl;

// 	delVector(p);
// 	return 0;
// }


// ****************************************************************************************
// // SIMPLE STRUCT


// typedef struct People{
// 	char name[100];
// 	int age;

// } people;


// void del(people *vector);


// int main(){
// 	int num;

// 	cout << "Number of peoples: ";
// 	cin >> num;

// 	people *p = new people[num];
	
// 	for (int i = 0; i < num; ++i)
// 	{
// 		cout << "Enter your name: ";
// 		cin >> p[i].name;

// 		cout << "Enter your age: ";
// 		cin >> p[i].age;
// 	}

// 	cout << "Registered peoples: " << endl;
// 	for (int i = 0; i < num; ++i)
// 	{
// 		cout << p[i].name << " have " << p[i].age << " years" << endl;
// 	}

// 	delVector(p);
// 	return 0;

// }


// ****************************************************************************************
// // CLASS PART 1


// class People
// {
// public:
// 	/*const*/ char *name = new char[1];
// 	/*const*/ char *cpf = new char[1];
// 	int age;

// 	People(const char *name, const char *cpf, int age){
// 		/*this->name = name*/ 
// 		/*this->cpf = cpf*/
// 		strcpy(this->name,name);
// 		strcpy(this->cpf,cpf);
// 		this->age= age;
// 	}

// 	~People(){ // Destroyer
// 		delete[] name;
// 		delete[] cpf;
// 	}
// };

// int main()
// {
// 	People p1("André","121324",19);
// 	// People p1 = {"Andre","2334556666",19}; With or without constructor

// 	// strcpy(p1.name,"André");
// 	// strcpy(p1.cpf,"2334556666");
// 	// p1.age = 19;
	
	
// 	cout << p1.name << " " << p1.cpf << " " << p1.age << endl;

// 	return 0;
// }


// // CLASS PART 2 - BUBBLE SORT


// #define MAX 10

// class Car
// {
// public:
// 	char name[50];
// 	char board[20];
// 	double price;
// };


// void bubbleSortChar(Car cars[], int size);


// int main(){
// 	Car cars[MAX];

// 	int i = 0;
// 	while (1){
// 		int answer;
// 		cout << "Enter a name of car: ";
// 		cin >> cars[i].name;
// 		cout << "Enter the licence plate: ";
// 		cin >> cars[i].board;
// 		cout << "Enter the price of the car: ";
// 		cin >> cars[i].price;
// 		cout << "Do you wish to continue?(1 - Yes, 2 - No): ";
// 		cin >> answer;

// 		if(answer == 2){
// 			break;
// 			cout << "You left the program" << endl;
// 		}
// 		cout << endl;
// 		i++;
// 	}

// 	bubbleSortChar(cars, i);

// 	cout << "\n**Cars available:\n\n";
// 	for (int j = 0; j <= i; j++)
// 	{
// 		cout << "Name of car: " << cars[j].name << endl;
// 		cout << "License plate: " << cars[j].board << endl;
// 		cout << "Price of car: US$" << cars[j].price << endl << endl;
// 	}

// 	return 0;
// }

// // Bubble Sort
// void bubbleSortChar(Car cars[], int size){
// 	int i, j;
// 	char aux[50];

// 	for (i = size; i >= 0; i--)
// 	{
// 		for (int j = 1; j <= size; j++)
// 		{
// 			if (cars[j-1].name[0] > cars[j].name[0]){
// 				strcpy(aux,cars[j].name);
// 				strcpy(cars[j].name,cars[j-1].name);
// 				strcpy(cars[j-1].name,aux);
// 			}
// 		}
// 	}
// }


// CLASS PART 3 - A BANK CRUD


// void errorMessage(const char *message);


// class Account{
// private:
// 	double balance = 0;
// public:
// 	/*const <!>*/ char *name = new char[50];
// 	/*const <!>*/ char *bank = new char[20];

// 	void deposit(double value){
// 		if (value > 0){
// 			balance += value;
// 			cout << "\nUS$" << value << " deposit made successfully." << endl;
// 			cout << "Current balance: US$" << getBalance() << endl;
// 		} else {
// 			errorMessage("Value null or negative");
// 		}
// 	}

// 	void drawOut(double value){
// 		if (!(value > balance)){
// 			this->balance -= value;
// 			cout << "US$" << value << " withdrawal successfully made." << endl;
// 		} else {
// 			errorMessage("withdrawal amount greater than available balance");
// 		}
// 	}

// 	void transfer(Account *a, double value){
// 		if (this->balance > 0 && value > 0 && !(value > balance)){
// 			a->deposit(value);
// 			drawOut(value);
// 			cout << "US$" << value << " transfer successfully made to account " << a->getName() << endl;
// 		} else if (balance <= 0){
// 			errorMessage("source account balance is zeroed");
// 		} else {
// 			errorMessage("negative reported value");
// 		}
// 	}

// 	void setBank(char *num){
// 		if (strcmp(num,"001") == 0){
// 			/*this->bank = "Banco do Brasil" <!>*/
// 		 	strcpy(bank,"Banco do Brasil");
// 		} else if (strcmp(num,"104") == 0){
// 			strcpy(bank,"Caixa Economica Federal");
// 		} else if (strcmp(num,"336") == 0){
// 			strcpy(bank,"C6 Bank");
// 		} else if (strcmp(num,"260") == 0){
// 			strcpy(bank,"Nubank");
// 		}
// 	}

// 	char *getBank(){
// 		return bank;
// 	}

// 	void setName(char *name){
// 		strcpy(this->name,name);
// 		/*this->name = name <!>*/
// 	}

// 	char *getName(){
// 		return name;
// 	}

// 	double getBalance(){
// 		return balance;
// 	}

// 	~Account(){ // Destroyer
// 		delete[] name;
// 		delete[] bank;
// 	}

// };


// void options(int numAc, int op, Account accounts[]);
// void home(Account accounts[]);
// void menu(int numAc, Account accounts[]);
// void createAccount(Account accounts[]);
// void viewAccount(Account accounts[]);
// void tryAgain(const char *message);
// void startEnd(const char *message);
// int i = 0;


// int main()
// {	
// 	Account accounts[MAX];

// 	startEnd("THE BANK");

// 	home(accounts);

// 	return 0;
// }


// void home(Account accounts[])
// {
// 	int numberAccount, answer;

// 	cout << "\n************** HOME ***************" << endl;
// 	cout << "* 1 - Acess Account               *" << endl;
// 	cout << "* 2 - Create new account          *" << endl;
// 	cout << "* 3 - See all registered accounts *" << endl;
// 	cout << "* 0 - Exit 	                  *" << endl;
// 	cout << "***********************************" << endl;
// 	cout << "\n <> Enter an option: ";
// 	cin >> answer;

// 	if ((answer == 1) || (answer == 3)) {
// 		if (i == 0){
// 			cout << "\n<<!>> WARNING: There are no accounts created yet.\n"
// 					"Create an account to proceed." << endl;
// 			createAccount(accounts);
// 		} else {
// 			if (answer == 1){
// 				cout << "\n <> Account Number: ";
// 				cin >> numberAccount;

// 				if (numberAccount > i || numberAccount < 0){
// 					tryAgain("account");
// 					home(accounts);
// 				} else {
// 					menu(numberAccount, accounts);
// 				}
// 			} else {
// 				viewAccount(accounts);
// 			}
// 		}
// 	} else if (answer == 2){
// 		createAccount(accounts);
// 	} else if (answer == 0) {
// 		startEnd("*");

// 		cout << "Thanks for using this system S2." << endl;
// 		exit (EXIT_SUCCESS);
// 	} else {
// 		tryAgain("option");
// 	}

// 	home(accounts);
// }


// void menu(int numAc, Account accounts[])
// {
// 	while (1){
// 		int option;
// 		system("cls");

// 		cout << "* Account: " << accounts[numAc-1].getBank() << endl;
// 		cout << "* Client: " << accounts[numAc-1].getName() << endl;
// 		cout << "* Current Balance: " << accounts[numAc-1].getBalance() << endl << endl;
// 		cout << "\n************** MENU ***************" << endl;
// 		cout << "* 1 - Deposit                     *" << endl;
// 		cout << "* 2 - Draw Out                    *" << endl;
// 		cout << "* 3 - Transfer                    *" << endl;
// 		cout << "* 4 - Back to Home                *" << endl;
// 		cout << "***********************************" << endl;
// 		cout << "\n <> Enter an option: ";
// 		cin >> option;

// 		options(numAc-1, option, accounts);
					
// 		cout << "\n* Do you wish to continue?(1 - Yes, 2 - No): ";
// 		cin >> option;
// 		if (option == 2)
// 			break;
// 	}
// }


// void options(int numAc, int op, Account accounts[])
// {
// 	system("cls");

// 	if (op == 1 || op == 2 || op == 3){
// 		double value;

// 		cout << "** OPTION " << op << " SELECTED" << endl;
// 		cout << "<> Enter an amount: US$";
// 		cin >> value;

// 		if (op == 1){
// 			accounts[numAc].deposit(value);
// 		} else if (op == 2){
// 			accounts[numAc].drawOut(value);
// 		} else if (op == 3){
// 			int targetAccount;

// 			cout << "<> Enter the target account number: ";
// 			cin >> targetAccount;

// 			if (targetAccount <= i && targetAccount >= 0)
// 				accounts[numAc].transfer(&accounts[targetAccount-1],value);
// 			else
// 				tryAgain("account"); 
// 		}
// 	} else if (op == 4){
// 		home(accounts);
// 	} else {
// 		tryAgain("option");
// 	}
// }


// void createAccount(Account accounts[])
// {
// 	char bank[20], name[50];

// 	cout << "\n<<!>> ATTENTION: You can still create " << (MAX - i) << " accounts.\n" << endl;
// 	cout << "Enter the bank you want to create an account(001 - BB, 104 - CEF, 336 - C6, 260 - Nubank): ";
// 	cin >> bank;

// 	if ((strcmp(bank,"001") == 0) || (strcmp(bank,"104") == 0) || (strcmp(bank,"336") == 0) || (strcmp(bank,"260") == 0)){
// 		cout << "Enter your name: ";
// 		cin >> name;

// 		accounts[i].setName(name);
// 		accounts[i].setBank(bank);
// 		cout << "\n" << accounts[i].getBank() << " bank account successfully created :)\n" << endl;
// 		i++;
// 	} else {
// 		tryAgain("bank");
// 		createAccount(accounts); 
// 	}
// }


// void viewAccount(Account accounts[])
// {
// 	int j = 0;
// 	cout << "\n****Accounts created(" << i << "):" << endl;
// 	while (j < i)
// 	{
// 		cout << "\nBank: " << accounts[j].getBank() << endl;
// 		cout << "Client name: " << accounts[j].getName() << endl << endl;
// 		j++;
// 	}
// }


// void startEnd(const char *message){
// 	system("cls");
// 	cout << 
// 	"**************************************************** " 
// 	<< message << 
// 	" ****************************************************" 
// 	<< endl;
// }


// void tryAgain(const char *message){
// 	cout << "\nInvalid " << message << ". Try again!\n" << endl;
// }


// void errorMessage(const char *message){
// 	cout << "\n<<X>> Error when performing transaction: " << message << "." << endl;
// }


// HERITAGE


// #define SIZE 50


// class Animal{
// protected:
// 	char name[SIZE];
// 	bool fly;
// 	int legs;
// 	int age;

// public:
// 	Animal(const char* name){
// 		strcpy(this->name,name);
// 		fly = false;
// 		legs = 0;
// 	}

// 	char* getName(){
// 		return this->name;
// 	}

// 	void setFly(bool fly){
// 		this->fly = fly;
// 	}

// 	bool getFly(){
// 		return this->fly;
// 	}

// 	void setLegs(int legs){
// 		this->legs = legs;
// 	}

// 	int getLegs(){
// 		return this->legs;
// 	}

// 	void setAge(int age){
// 		this->age = age;
// 	}

// 	int getAge(){
// 		return this->age;
// 	}
// };


// class Dog : public Animal {
// protected:
// 	char hairColor[SIZE];

// public:
// 	Dog(const char* name) : Animal(name){};

// 	void setHairColor(const char* hairColor){
// 		strcpy(this->hairColor, hairColor);
// 	}

// 	const char* getHairColor(){
// 		return this->hairColor;
// 	}
	
// };


// int main(){
// 	char name[SIZE];
// 	char hairColor[SIZE];

// 	cout << "Enter the name of dog: ";
// 	cin.getline(name,SIZE);

// 	cout << "Enter the hair color of " << name << ": ";
// 	cin.getline(hairColor,SIZE);

// 	Dog dog(name);

// 	dog.setLegs(4);
// 	dog.setAge(9);
// 	dog.setHairColor(hairColor);

// 	cout << "\nThis is " << dog.getName() << " and your color is " << dog.getHairColor() << endl;
// 	cout << dog.getName() << " have " << dog.getLegs() << " legs." << endl;
// 	cout << "Can " << dog.getName() << " fly? ";
// 	if (dog.getFly() == 0){
// 		cout << "No" << endl;
// 	} else {
// 		cout << "Yes" << endl;
// 	}

// 	return 0;
// }


// VIRTUAL FUNCTIONS - POLYMORPHISM


// class Mother{
// public:
// 	virtual void message(){
// 		cout << "Hello, I'm the mother class" << endl;
// 	}
// };

// class Son : public Mother{
// public:
// 	virtual void message(){
// 		cout << "Hello, I'm the son class" << endl;
// 	}
// };

// void message(Mother* obj);

// void message(Mother* obj){
// 	obj->message();
// }

// int main(){
// 	Mother mother;
// 	Son son;

// 	message(&son);

// 	return 0;
// }


// ****************************************************************************************
// STACK WITH CLASS TEMPLATE


// template <class Type>

// class Stack{
// private:
// 	Type* vector;
// 	int max;
// 	int top;
// public:
// 	Stack(int size){
// 		vector = new Type[size];
// 		max = size - 1;
// 		top = -1;
// 	}

// 	~Stack(){
// 		delete[] vector;
// 	}

// 	void stackUp(Type element){
// 		if (top < max){
// 			vector[++top] = element;
// 		} else {
// 			cout << "Full stack" << endl;
// 		}
// 	} 

// 	void unstack(){
// 		if (top != -1){
// 			top--;
// 		} else {
// 			cout << "Empty stack" << endl;
// 		}
// 	}

// 	bool emptyStack(){
// 		bool empty = false;

// 		if (top == -1){
// 			empty = true;
// 		}

// 		return empty;
// 	}

// 	Type getTop(){
// 		return vector[top];
// 	}

// 	void checkTop(){
// 		if (emptyStack()){
// 			cout << "Empty Stack" << endl;
// 		} else {
// 			cout << vector[top] << endl;
// 		}
// 	}

// };

// int main(){
// 	Stack<const char*> s(5);

// 	s.stackUp("python");
// 	s.stackUp("java");
// 	s.stackUp("C");
// 	s.stackUp("C++");
// 	s.stackUp("C#");
// 	s.stackUp(" ");
// 	s.checkTop();
// 	s.unstack();
// 	s.unstack();
// 	s.unstack();
// 	s.unstack();
// 	s.unstack();
// 	s.unstack();
// 	cout << s.emptyStack();

// 	return 0;
// }


// ****************************************************************************************
// ORDERED BINARY TREE


// template <class Type>

// class Stack{
// private:
// 	Type* vector;
// 	int max;
// 	int top;
// public:
// 	Stack(int size){
// 		vector = new Type[size];
// 		max = size - 1;
// 		top = -1;
// 	}

// 	~Stack(){
// 		delete[] vector;
// 	}

// 	void stackUp(Type element){
// 		if (top < max){
// 			vector[++top] = element;
// 		} else {
// 			cout << "Full stack" << endl;
// 		}
// 	} 

// 	void unstack(){
// 		if (top != -1){
// 			top--;
// 		} else {
// 			cout << "Empty stack" << endl;
// 		}
// 	}

// 	bool emptyStack(){
// 		bool empty = false;

// 		if (top == -1){
// 			empty = true;
// 		}

// 		return empty;
// 	}

// 	Type getTop(){
// 		return vector[top];
// 	}

// 	void checkTop(){
// 		if (emptyStack()){
// 			cout << "Empty Stack" << endl;
// 		} else {
// 			cout << vector[top] << endl;
// 		}
// 	}

// };

// class No {
// public:
// 	int el;
// 	No *left,*right;
// 	No(){
// 		left=right=0;			
// 	}

// 	No(int e,No *l=0,No *r=0){
// 		el=e;
// 		left=l;
// 		right=r;
// 	}
// };

// class Tree {
// protected:
// 	No *root;
// public:
// 	Tree(){
// 		root = 0;		
// 	}

// 	Tree(No *raiz){
// 		root = raiz;
// 	}

// 	void preOrderRecursion(No *n){ 
// 		//RAIZ-ESQ-DIR
// 		if (root==NULL){
// 			cout << "<EMPTY>";
// 		} else {
// 			if (n != NULL){
// 				cout << "<" << n->el;
// 				preOrderRecursion(n->left);
// 				preOrderRecursion(n->right);
// 				cout << ">";
// 			} else {
// 				cout << "<>";
// 			}
// 		}
// 	}

// 	void inOrderRecursion(No *n){
// 		//ESQ-RAIZ-DIR
// 		if (root==NULL){
// 			cout << "<EMPTY>";
// 		} else {
// 			if (n != NULL){
// 				inOrderRecursion(n->left);
// 				cout << "<" << n->el;
// 				inOrderRecursion(n->right);
// 				cout << ">";
// 			} else {
// 				cout << "<>";
// 			}
// 		}
// 	}

// 	void postOrderRecursion(No *n){
// 		//ESQ-DIR-RAIZ
// 		if (root==NULL){
// 			cout << "<EMPTY>";
// 		} else {
// 			if (n != NULL){
// 				postOrderRecursion(n->left);
// 				postOrderRecursion(n->right);
// 				cout << "<" << n->el;
// 				cout << ">";
// 			} else {
// 				cout << "<>";
// 			}
// 		}
// 	}

// 	void preOrderWithStack(){
// 		Stack<No*> stack(sizeof(Tree));
// 		No *r = root;
// 		if (r!=NULL){
// 			stack.stackUp(r);
// 			while (!stack.emptyStack()){
// 				r = stack.getTop();
// 				cout << stack.getTop()->el << endl;
// 				stack.unstack();
// 				if (r->right != 0){
// 					stack.stackUp(r->right);
// 				} 
// 				if (r->left != 0){
// 					stack.stackUp(r->left);
// 				}
// 			}
// 		}
// 	}

// 	// void inOrderWithStack(){
// 	// 	Stack<No*> stack(sizeof(Tree));
// 	// 	No *r = root;
		
// 	// }

// 	// void postOrderWithStack(){
// 	// 	Stack<No*> stack(sizeof(Tree));
// 	// 	No *r = root;
// 	// }

// 	No* getRoot(){
// 		return root;
// 	}
// };

// int main(){
// 	No *b= new No(1);
// 	No *c= new No(3);
// 	No *a= new No(2,b,c);
// 	Tree *tree = new Tree(a);

// 	// tree->preOrderRecursion(tree->getRoot());
// 	// cout << endl;
// 	// tree->inOrderRecursion(tree->getRoot());
// 	// cout << endl;
// 	// tree->postOrderRecursion(tree->getRoot());

// 	clock_t time_req;

// 	time_req = clock();

// 	tree->preOrderWithStack();

// 	time_req = clock() - time_req;

// 	cout << "Execution with stack took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

// 	time_req = clock();

// 	tree->preOrderRecursion(a);

// 	time_req = clock() - time_req;

// 	cout << "Execution with recursion took " << (float)time_req/CLOCKS_PER_SEC << " seconds";
// }


// ****************************************************************************************

// ORDERED BINARY TREE


template <class Type>
class Node{
public:
	Type element;
	Node<Type> *left, *right;
	bool successor;

	Node(){
		left = right = NULL;
	}

	Node(Type el, Node<Type> *lft = NULL, Node<Type> *rght = NULL, bool suc = false){
		element = el;
		left = lft;
		right = rght;
		successor = suc;
	}

	Type getElement(){
		return element;
	}

	Node<Type> *getLeft(){
		return left;
	}

	Node<Type> *getRight(){
		return right;
	}

	// void setLeft(Node<Type> *lft){
	// 	left = lft;
	// }

	// void setRight(Node<Type> *rght){
	// 	right = rght;
	// }

};


template <class Type>
class Stack{
private:
	Type *vector;
	int max;
	int top;
public:
	Stack(int size){
		vector = new Type[size];
		max = size - 1;
		top = -1;
	}

	~Stack(){
		delete[] vector;
	}

	void stackUp(Type element){
		if (top < max){
			vector[++top] = element;
		} else {
			cout << "Full stack" << endl;
		}
	} 

	void unstack(){
		if (top != -1){
			top--;
		} else {
			cout << "Empty stack" << endl;
		}
	}

	bool emptyStack(){
		bool empty = false;

		if (top == -1){
			empty = true;
		}

		return empty;
	}

	Type getTop(){
		return vector[top];
	}

	void checkTop(){
		if (emptyStack()){
			cout << "Empty Stack" << endl;
		} else {
			cout << vector[top] << endl;
		}
	}

};


template <class Type>
class Tree{
private:
	Node<Type> *root;
public:
	Tree(){
		root = NULL;
	}

	Tree(Node<Type> *rt){
		root = rt;
	}

	Node<Type> *getRoot(){
		return root;
	}

	void insertWithoutRecursion(Node<Type> *node){
		Node<Type> *p = root, *temp = NULL;
		while (p != NULL){
			temp = p;
			if (node->getElement() < p->getElement()){
				p = p->getLeft();
			} else {
				p = p->getRight();
			}
		}

		if (root == NULL){
			root = node;
		} else if (node->getElement() < temp->getElement()){
			temp->left = node;
		} else if (node->getElement() > temp->getElement()){
			temp->right = node;
		} else {
			cout << "<!> ALERT:Duplicate node. <!>" << endl <<
			"The value \"" << node->getElement() << 
			"\" already exists in the tree."<< endl << endl;
		}
	}

	void insertWithRecursion(Node<Type> *node, Node<Type> *rt){
		if (rt != NULL){
			if (node->getElement() < rt->getElement()){
				if (rt->getLeft() == NULL){
					rt->left = node;
				} else {
					insertWithRecursion(node, rt->getLeft());
				}
			} else if (node->getElement() > rt->getElement()){
				if (rt->getRight() == NULL){
					rt->right = node;
				} else {
					insertWithRecursion(node, rt->getRight());
				}
			} else {
				cout << "<!> ALERT:Duplicate node. <!>" << endl <<
				"The value \"" << node->getElement() << 
				"\" already exists in the tree."<< endl << endl;
			}
		} else {
			rt = node;
		}
	}

	void insertIntoAlignedTree(Node<Type> *node){
		Node<Type> *p = root, *temp = NULL;
		if (root == NULL){
			root = node;
		}
		while (p != NULL){
			temp = p;
			if (node->getElement() < p->getElement()){
				p = p->getLeft();
			} else if (p->successor == false) {
				p = p->getRight();
			} else {
				break;
			}
		}

		if (node->getElement() < temp->getElement()){
			temp->left = node;
			node->successor = true;
			node->right = temp;
		} else if (temp->successor == true){
			node->successor = true;
			temp->successor = false;
			node->right = temp->getRight();
			temp->right = node;
		} else {
			temp->right = node;
		}

	}

	void preOrderIntoAlignedTree(Node<Type> *node){
		if (node != NULL){
			cout << node->getElement() << " ";
			preOrderIntoAlignedTree(node->getLeft());
			if (node->successor == false){
				preOrderIntoAlignedTree(node->getRight());
			}
		}
	}

	void inOrderIntoAlignedTree(Node<Type> *node){
		if (node != NULL){
			inOrderIntoAlignedTree(node->getLeft());
			cout << node->getElement() << " ";
			if (node->successor == false){
				inOrderIntoAlignedTree(node->getRight());
			}
		}
	}

	void postOrderIntoAlignedTree(Node<Type> *node){
		if (node != NULL){
			postOrderIntoAlignedTree(node->getLeft());
			if (node->successor == false){
				postOrderIntoAlignedTree(node->getRight());
			}
			cout << node->getElement() << " ";
		}
	}

	void printAllTree(){
		int op;
		cout << endl << "1 - PreOrder, 2 - InOrder, 3 - PostOrder or 4 - All" << endl;
		cout << "Choose the route order: ";
		cin >> op;
		// op = checkOption(op,1,3);
		if (op == 1){
			cout << endl << "PreOrder with recursion: ";
			allPreOrder(root);
			cout << endl;
		} else if (op == 2){
			cout << endl << "InOrder with recursion: ";
			allInOrder(root);
			cout << endl;
		} else if (op == 3){
			cout << endl << "PostOrder with recursion: ";
			allPostOrder(root);
			cout << endl;
		} else if (op ==4){
			cout << endl << "PreOrder with recursion: ";
			allPreOrder(root);
			cout << endl << "InOrder with recursion: ";
			allInOrder(root);
			cout << endl << "PostOrder with recursion: ";
			allPostOrder(root);
			cout << endl;
		} else {
			cout << "Invalid option. Try again!" << endl;
			printAllTree();
		}
	}

	// ROOT-LEFT-RIGHT
	void allPreOrder(Node<Type> *node){
		if (node != NULL){
			// cout << "<";
			cout << node->getElement();
			cout << " ";
			allPreOrder(node->getLeft());
			allPreOrder(node->getRight());
			// cout << ">";
		} 
		// else {
		// 	cout << "<>";
		// }
	}

	// LEFT-ROOT-RIGHT
	void allInOrder(Node<Type> *node){
		if (node != NULL){
			// cout << "<";
			allInOrder(node->getLeft());
			cout << node->getElement();
			cout << " ";
			allInOrder(node->getRight());
			// cout << ">";
		} 
		// else {
		// 	cout << "<>";
		// }
	}

	// LEFT-RIGHT-ROOT
	void allPostOrder(Node<Type> *node){
		if (node != NULL){
			//cout << "<";
			allPostOrder(node->getLeft());
			allPostOrder(node->getRight());
			cout << node->getElement();
			cout << " ";
			//cout << ">";
		} 
		// else {
		// 	cout << "<>";
		// }
	}

	// ROOT-LEFT-RIGHT
	void preOrderWithStack(){
		Stack<Node<Type>*> stack(sizeof(Tree));
		Node<Type> *pRoot = root;

		cout << "PreOrder With Stack: ";
		if (pRoot != NULL){
			stack.stackUp(pRoot);
			while (!stack.emptyStack()){
				pRoot = stack.getTop();
				cout << pRoot->getElement() << " ";
				stack.unstack();
				if (pRoot->getRight() != NULL){
					stack.stackUp(pRoot->getRight());
				} 
				if (pRoot->getLeft() != NULL){
					stack.stackUp(pRoot->getLeft());
				}
			}
		} 
	}

	// LEFT-ROOT-RIGHT
	void inOrderWithStack(){
		Stack<Node<Type>*> stack(sizeof(Tree));
		Node<Type> *pRoot = this->root;

		cout << "InOrder with stack: ";
		while ((pRoot != NULL) || (!stack.emptyStack())){
		
			while (pRoot != NULL){
				stack.stackUp(pRoot);
				pRoot = pRoot->getLeft();
			}	
		
			pRoot = stack.getTop();
			stack.unstack();
			cout << pRoot->getElement() << " ";

			pRoot = pRoot->getRight();
		}	
	}

	// LEFT-RIGHT-ROOT
	void postOrderWithStack(){
		Stack<Node<Type>*> stack(sizeof(Tree));
		Node<Type> *pRoot = this->root;

		cout << "PostOrder With Stack: ";
		do {
			if (pRoot != NULL){
				stack.stackUp(pRoot);
				pRoot = pRoot->getLeft();
			} else {
				if (!stack.emptyStack()){
					if (stack.getTop()->getRight() == NULL){
						pRoot = stack.getTop();
						cout << pRoot->getElement() << " ";
						stack.unstack();

						while (pRoot == stack.getTop()->getRight()){
							pRoot = stack.getTop();
							cout << pRoot->getElement() << " ";
							stack.unstack();

							if (stack.emptyStack()){
								break;
							}
						}
					} 

					if (!stack.emptyStack()){
						pRoot = stack.getTop()->getRight();
					} else {
						pRoot = NULL;
					}
				}
			}
		} while (!stack.emptyStack());

	}

	// void printTreeStartinAt(Node<Type> *node){
	// 	void preOrder(){

	// 	}
	// 	void inOrder(){

	// 	}
	// 	void postOrder(){

	// 	}
	// }

};


int main(){
	Node<char> *a = new Node<char>('a');
	Node<char> *b = new Node<char>('b');
	Node<char> *c = new Node<char>('c');
	Node<char> *d = new Node<char>('d');
	Node<char> *e = new Node<char>('e');
	Node<char> *f = new Node<char>('f');
	Node<char> *g = new Node<char>('g');
	Node<char> *h = new Node<char>('h');
	Node<char> *i = new Node<char>('i');

	// c->setLeft(a);
	// c->setRight(a);
	// cout << c->getElement() << endl;
	// cout << c->getLeft()->getRoot() << endl;
	// cout << c->getRight()->getRoot() << endl;

	Tree<char> *tree = new Tree<char>(d);

	tree->insertIntoAlignedTree(a);
	tree->insertIntoAlignedTree(b);
	tree->insertIntoAlignedTree(c);
	tree->insertIntoAlignedTree(f);
	tree->insertIntoAlignedTree(e);
	tree->insertIntoAlignedTree(g);
	tree->insertIntoAlignedTree(h);
	tree->insertIntoAlignedTree(i);

	// tree->printAllTree();
	tree->preOrderIntoAlignedTree(tree->getRoot());
	cout << endl;
	tree->inOrderIntoAlignedTree(tree->getRoot());
	cout << endl;
	tree->postOrderIntoAlignedTree(tree->getRoot());

	return 0;
}


// Recap "friend";