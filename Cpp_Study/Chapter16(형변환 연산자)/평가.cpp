//step1.Base class : class Product
//step2.Derived class : class Book, class CD, class Cellphone
//step3.Base class ������� : int price, string description(�߰� ����)
//step4.Derived class ������� :
//	class Book : string title, string writer, string publisher
//	class CD : string title, strint singer(�߰� ����)
//
//step5.getProduct() ����Լ� �������̵�.
//
//step6.  1. ��ǰ�߰�  2. ��ǰ��ȸ  3. ���� �� �⺻ POS ����â�� ��� ���ÿ� ���� ���� ���� (��ǰ���� �޴� �߰� ����)
//
//step7.��ü������ �迭  Product * pobj [[100]����Ͽ� �����Ҵ� static ������� idx, vector �����̳� ���

/*
	��.c
	created : 2022.03.28
	Author : ������
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
	Product() {} //Product ������
	Product(int id, int price, string des, int number)
	{
		this->id = id; this->price = price;
		this->description = des;
		this->number = number; //������ �ڽ� Ŭ������ ��ȸ�� ���� ���� ���� 
	}

	virtual void getProduct() = 0; // �����Լ�(�θ� Ŭ������ �����ϰ� �ڽ� Ŭ�������� ������ getProduct �Լ��� ����
	//���߿� �ڽ� Ŭ������ getProduct �Լ����� ��� �� ���� �Լ�ȭ
	int getId() { return id; } 
	int getPrice() { return price; }
	string getDes() { return description; }
	int getnum() { return number; }
};

class Book : public Product //Product ��� 
{
	string isbn, author, title, publisher;  //Product�� ���� ���� ����
public:
	Book() {}
	Book(int id, string des, string pub, int price, string bookName, string author, string isbn, int number) :Product(id, price, des, number)
	{
		this->isbn = isbn; this->author = author; this->title = bookName; this->publisher = pub;
	}
	void getProduct();
};

void Book::getProduct() //��� �Լ� 
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
void CompactDisc::getProduct() //��� �Լ�
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
	Product* pobj[100]; //�����Ҵ�

	static int idx; //1 2 3 4 5 6 7 8 9...
	int price = 0;
	int playtime = 0;
	int number = 0;

	string des, pro, isbn, title, model, manufacturer, singer, pub, author;

	vector<string> v;
	vector<string>::iterator iter;

	for (;;)
	{
		main_menu(); //���� �޴� �Լ�
		int num;
		cin >> num;
		if (num == 1) //�߰� 
		{
			if (idx >= 100) //��ǰ�� 100�� �̻��̸� �߰����� ����
			{
				break;
			}
			add_product_menu(); //�߰� �޴� �Լ�
			cin >> num;
			cin.ignore(); // int ������ null���� ���� ���ϱ� ������ null ���� ��������Ѵ�. (�Է¹��ۿ� �����ֱ� ����)
			idx++; //�߰��ϸ� id�� ����
			if (num == 1)
			{
				number = 1;
				cout << "NO :" << idx << endl;
				cout << "PRICE :";
				cin >> price; cin.ignore(); //���� ���������� ������ getline �Լ��� null�� ���޵ǹǷ� cin.ignore�� �̿��Ͽ� �Է¹��� ���
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
				pobj[idx] = book; //�Է� ���� ���� ����
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

		else if (num == 2) //��ȸ 
		{
			print_product_menu();
			cin >> num;
			if (num == 1)
			{
				for (int i = 1; i <= idx; ++i)
				{
					if (pobj[i]->getnum() == 1) //num ���� 1�� book
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
					if (pobj[i]->getnum() == 2) //num ���� 2�� CompactDisc
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
					if (pobj[i]->getnum() == 3) //num ���� 3�� Cellphone
					{
						pobj[i]->getProduct();
					}
					cout << endl;
				}
			}
		}
		else if (num == 3) //���� 
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