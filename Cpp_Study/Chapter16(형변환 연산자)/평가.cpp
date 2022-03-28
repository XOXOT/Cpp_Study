//step1.Base class : class Product
//step2.Derived class : class Book, class CD, class Cellphone
//step3.Base class 멤버변수 : int price, string description(추가 가능)
//step4.Derived class 멤버변수 :
//	class Book : string title, string writer, string publisher
//	class CD : string title, strint singer(추가 가능)
//
//step5.getProduct() 멤버함수 오버라이딩.
//
//step6.  1. 상품추가  2. 상품조회  3. 종료 를 기본 POS 메인창에 띄워 선택에 따라 동작 구현 (상품삭제 메뉴 추가 가능)
//
//step7.객체포인터 배열  Product * pobj [[100]사용하여 동적할당 static 멤버변수 idx, vector 컨테이너 사용

/*
	평가.c
	created : 2022.03.28
	Author : 최희태
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void main_menu();
void add_product_menu();
void print_product_menu();

class Product
{
	int id;
	int price, number;
	string description;
public:
	Product() {} //Product 생성자
	Product(int id, int price, string des, int number)
	{
		this->id = id; this->price = price;
		this->description = des;
		this->number = number; //각각의 자식 클래스를 조회를 위한 구별 변수 
	}

	virtual void getProduct() = 0; // 가상함수(부모 클래스는 선언만하고 자식 클래스에서 각각의 getProduct 함수를 실행
	//나중에 자식 클래스의 getProduct 함수에서 써야 할 변수 함수화
	int getId() { return id; } 
	int getPrice() { return price; }
	string getDes() { return description; }
	int getnum() { return number; }
};

class Book : public Product //Product 상속 
{
	string isbn, author, title, publisher;  //Product에 없는 변수 생성
public:
	Book() {}
	Book(int id, string des, string pub, int price, string bookName, string author, string isbn, int number) :Product(id, price, des, number)
	{
		this->isbn = isbn; this->author = author; this->title = bookName; this->publisher = pub;
	}
	void getProduct();
};

void Book::getProduct() //출력 함수 
{
	cout << "---------------------------------" << endl;
	cout << "NO  " << getId() << endl;
	cout << "ISBN : " << isbn << endl;
	cout << "TITLE : " << title << endl;
	cout << "WRITER : " << author << endl;
	cout << "PUBLISHER : " << publisher << endl;
	cout << "PRICE : " << getPrice() << endl;
	cout << "DESCRIPTION : " << getDes() << endl;
	cout << "---------------------------------" << endl;
}

class CompactDisc : public Product
{
	string title, singer;
	int playtime;
public:
	CompactDisc(){}
	CompactDisc(int id, string des, int price, string title, string singer, int playtime, int number) : Product(id, price, des, number)
	{
		this->title = title; this->singer = singer; this->playtime = playtime;
	}
	void getProduct();
};
void CompactDisc::getProduct() //출력 함수
{
	cout << "---------------------------------"<< endl;
	cout << "NO " << getId() << endl;
	cout << "TITLE : " << title << endl;
	cout << "PLAY TIME : " << playtime << endl;
	cout << "SINGER : " << singer << endl;
	cout << "PRICE : " << getPrice() << endl;
	cout << "DESCRIPTION : " << getDes() << endl;
	cout << "---------------------------------" << endl;
}

class Cellphone : public Product 
{
	string model, manufacturer;
public:
	Cellphone(){}
	Cellphone(int id, string des, int price, string model, string manufacturer, int number) :Product(id, price, des, number)
	{
		this->model = model; this->manufacturer = manufacturer;
	}
	void getProduct();
};
void Cellphone::getProduct() 
{
	cout << "---------------------------------" << endl;
	cout << "NO " << getId() << endl;
	cout << "MODEL : " << model << endl;
	cout << "MANUFACTURER : " << manufacturer << endl;
	cout << "PRICE : " << getPrice() << endl;
	cout << "DESCRIPTION : " << getDes() << endl;
	cout << "---------------------------------" << endl;
}
int main(void)
{
	Product* pobj[100]; //동적할당

	static int idx; //1 2 3 4 5 6 7 8 9...
	int price = 0;
	int playtime = 0;
	int number = 0;

	string des, pro, isbn, title, model, manufacturer, singer, pub, author;

	vector<string> v;
	vector<string>::iterator iter;

	for (;;)
	{
		main_menu(); //메인 메뉴 함수
		int num;
		cin >> num;
		if (num == 1) //추가 
		{
			if (idx >= 100) //제품이 100개 이상이면 추가하지 못함
			{
				break;
			}
			add_product_menu(); //추가 메뉴 함수
			cin >> num;
			cin.ignore(); // int 변수는 null값을 담지 못하기 때문에 null 값을 버려줘야한다. (입력버퍼에 남아있기 때문)
			idx++; //추가하면 id값 증가
			if (num == 1)
			{
				number = 1;
				cout << "NO :" << idx << endl;
				cout << "PRICE :";
				cin >> price; cin.ignore(); //위와 마찬가지인 이유와 getline 함수에 null이 전달되므로 cin.ignore을 이용하여 입력버퍼 비움
				cout << "DESCRIPTION :";
				getline(cin, des);
				cout << "ISBN :";
				getline(cin, isbn);
				cout << "TITLE :";
				getline(cin, title);
				cout << "WRITER :";
				getline(cin, author);
				cout << "PUBLISHER :";
				getline(cin, pub);
				Book* book = new Book(idx, des, pub, price, title, author, isbn, number); //
				pobj[idx] = book; //입력 받은 값을 저장
			}
			else if (num == 2)
			{
				number = 2;
				cout << "NO :" << idx << endl;
				cout << "PRICE :";
				cin >> price; cin.ignore();
				cout << "DESCRIPTION :";
				getline(cin, des);
				cout << "TITLE :";
				getline(cin, title);
				cout << "PLAY TIME :";
				cin >> playtime; cin.ignore();
				cout << "SINGER :";
				getline(cin, singer);
				CompactDisc* cd = new CompactDisc(idx, des, price, title, singer, playtime, number);
				pobj[idx] = cd;
			}
			else if (num == 3)
			{
				number = 3; 
				cout << "NO :" << idx << endl;
				cout << "PRICE :";
				cin >> price; cin.ignore();
				cout << "DESCRIPTION :";
				getline(cin, des);
				cout << "MODEL :";
				getline(cin, model);
				cout << "MANUFACTURER :";
				getline(cin, manufacturer);
				Cellphone* phone = new Cellphone(idx, des, price, model, manufacturer, number);
				pobj[idx] = phone;
			}
			cout << endl;
		}

		else if (num == 2) //조회 
		{
			print_product_menu();
			cin >> num;
			if (num == 1)
			{
				for (int i = 1; i <= idx; ++i)
				{
					if (pobj[i]->getnum() == 1) //num 값이 1인 book
					{
						pobj[i]->getProduct();
					}
					cout << endl;
				}
			}
			else if (num == 2)
			{
				for (int i = 1; i <= idx; ++i)
				{
					if (pobj[i]->getnum() == 2) //num 값이 2인 CompactDisc
					{
						pobj[i]->getProduct();
					}
					cout << endl;
				}
			}
			else if (num == 3)
			{
				for (int i = 1; i <= idx; ++i)
				{
					if (pobj[i]->getnum() == 3) //num 값이 3인 Cellphone
					{
						pobj[i]->getProduct();
					}
					cout << endl;
				}
			}
		}
		else if (num == 3) //종료 
		{
			break;
		}
	}

	return 0;
}

void main_menu()
{
	printf("\n");
	printf("\n");
	cout << "++++++++++++++++POS++++++++++++++++" << endl;
	printf("\n");
	cout << "1. 상품추가 " << endl;
	cout << "2. 상품조회 " << endl;
	cout << "3. 종    료 " << endl;
}

void add_product_menu()
{
	system("cls");
	printf("\n");
	printf("\n");
	cout << "추가상품선택 " << endl;
	printf("\n");
	cout << "1. Book " << endl;
	cout << "2. Compact Disc " << endl;
	cout << "3. Cellphone" << endl;
}

void print_product_menu()
{
	system("cls");
	printf("\n");
	printf("\n");
	cout << "조회상품선택 " << endl;
	printf("\n");
	cout << "1. Book " << endl;
	cout << "2. Compact Disc " << endl;
	cout << "3. Cellphone" << endl;
}