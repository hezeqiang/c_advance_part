#include <iostream>
#include <cstring>

using namespace std;

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};


int main()
{
	Books Book1;
	Books Book2;

	strcpy(Book1.title, "c++ primer");
	strcpy(Book2.author, "Runoob");
	strcpy(Book1.subject, "basic language");
	Book2.book_id = 123456;

	//output the info of the first book
	cout << "the title of the firt book:" << Book2.title << endl;
	cout << "the author of the first book" << Book2.author << endl;
	
	printBook(Book1);

	return 0;
}

void printBook(struct Books book)
{
	cout << "����� : " << book.title << endl;
	cout << "������ : " << book.author << endl;
	cout << "����Ŀ : " << book.subject << endl;
	cout << "�� ID : " << book.book_id << endl;
}


/*

structure defination with typedef;

typedef struct Books
{
char  title[50];
char  author[50];
char  subject[100];
int   book_id;
}Books;


int main()
{
	Books book1,book2;
}

*/



/*
quote the struture variable with pointer

struct Books
{
char  title[50];
char  author[50];
char  subject[100];
int   book_id;
};

void printBook( struct Books *book )
{
cout << "�����  : " << book->title <<endl;
cout << "������ : " << book->author <<endl;
cout << "����Ŀ : " << book->subject <<endl;
cout << "�� ID : " << book->book_id <<endl;
}

int main()
{
	// ͨ���� Book1 �ĵ�ַ����� Book1 ��Ϣ
    printBook( &Book1 );
 
    // ͨ���� Book2 �ĵ�ַ����� Book2 ��Ϣ
    printBook( &Book2 );
 
}

*/