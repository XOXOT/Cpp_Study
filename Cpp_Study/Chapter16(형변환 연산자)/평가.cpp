#include <iostream>
#include <string>
using namespace std;

void main_menu();
void add_product_menu();
void print_product_menu();

class Product 
{
	int id, price;
	string description, publisher;
public:
	Product() {}
	Product(int id, int price, string des, string pub) {
		this->id = id; this->price = price;
		description = des; publisher = pub;
	}
	virtual void getProduct() = 0;
	int getId() { return id; }
	int getPrice() { return price; }
	string getDes() { return description; }
	string getPub() { return publisher; }
};

class Book : public Product {
	string isbn, author, title;
public:
	Book(int id, string des, string pub, int price, string bookName, string author, string isbn) :Product(id, price, des, pub) 
	{
		this->isbn = isbn; this->author = author; this->title = bookName;
	}
	void getProduct();
	string getName() { return title; }
	string getAut() { return author; }
	string getISBN() { return isbn; }
};

void Book::getProduct() {
	cout << "NO  " << getId() << endl;
	cout << "ISBN : " << isbn << endl;
	cout << "TITLE : " << title << endl;
	cout << "WRITER : " << author << endl;
	cout << "PUBLISHER : " << getPub() << endl;
	cout << "PRICE : " << getPrice() << endl;
	cout << "DESCRIPTION : " << getDes() << endl;
}

class CompactDisc : public Product 
{
	string title, singer, playtime;
public:
	CompactDisc(int id, string des, int price, string title, string singer, int playtime, string pub) : Product(id, price, des, pub) 
	{
		this->title = title; this->singer = singer; this->playtime;
	}
	void getProduct();
};
void CompactDisc::getProduct() {
	cout << "NO " << getId() << endl;
	cout << "TITLE : " << title << endl;
	cout << "PLAY TIME : " << playtime << endl;
	cout << "SINGER : " << singer << endl;
	cout << "PRICE : " << getPrice() << endl;
	cout << "DESCRIPTION : " << getDes() << endl;
}

class Cellphone : public Product {
	string model, manufacturer;
public:
	Cellphone(int id, string des, string pub, int price, string model, string manufacturer)
		:Product(id, price, des, pub) 
	{
		this->model = model; this->manufacturer = manufacturer;
	}
	void getProduct();
};
void Cellphone::getProduct() {
	cout << "NO " << getId() << endl;
	cout << "MODEL : " << model << endl;
	cout << "MANUFACTURER" << manufacturer << endl;
	cout << "PRICE : " << getPrice() << endl;
	cout << "DESCRIPTION : " << getDes() << endl;
}
int main(void)
{
	Product* pobj[100];
	int id = 1;
	int price = 0;
	string des, pro, isbn, title, model, manufacturer, playtime, singer, pub, author;

	for (;;)
	{
		main_menu();
		int num;
		cin >> num;
		if (num == 1) //�߰� 
		{
			if (id >= 100)
			{
				break;
			}
			add_product_menu();
			cin >> num;
			cin.ignore();
			if (num == 1)
			{
				cout << "id :" << id << endl;

			}
			else if (num == 2)
			{
				cout << "id :" << id << endl;
				
			}
			else if (num == 3)
			{
				cout << "id :" << id << endl;

			}
		}
		else if(num ==2) //��ȸ 
		{
			print_product_menu();
			cin >> num;
			cin.ignore();
			if (num == 1)
			{


			}
			else if (num == 2)
			{
				

			}
			else if (num == 3)
			{
			

			}
		}
		else if (num == 3) //���� 
		{
			break;
		}
		else
			printf("\n");
			cout << "���ڸ� �߸� �Է��ϼ̽��ϴ�." << endl;
			printf("\n");
			printf("\n");
	}
	
	return 0;
}

void main_menu()
{
	printf("\n");
	printf("\n");
	cout << "++++++++++++++++POS++++++++++++++++" << endl;
	printf("\n");
	cout << "1. ��ǰ�߰� " << endl;
	cout << "2. ��ǰ��ȸ " << endl;
	cout << "3. ��    �� " << endl;
}

void add_product_menu()
{
	system("cls");
	printf("\n");
	printf("\n");
	cout << "�߰���ǰ���� " << endl;
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
	cout << "��ȸ��ǰ���� " << endl;
	printf("\n");
	cout << "1. Book " << endl;
	cout << "2. Compact Disc " << endl;
	cout << "3. Cellphone" << endl;
}