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
	cout << "书标题 : " << book.title << endl;
	cout << "书作者 : " << book.author << endl;
	cout << "书类目 : " << book.subject << endl;
	cout << "书 ID : " << book.book_id << endl;
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
cout << "书标题  : " << book->title <<endl;
cout << "书作者 : " << book->author <<endl;
cout << "书类目 : " << book->subject <<endl;
cout << "书 ID : " << book->book_id <<endl;
}

int main()
{
	// 通过传 Book1 的地址来输出 Book1 信息
    printBook( &Book1 );
 
    // 通过传 Book2 的地址来输出 Book2 信息
    printBook( &Book2 );
 
}

*/