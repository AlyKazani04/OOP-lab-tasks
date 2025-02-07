#include <bits/stdc++.h>
using namespace std;

class Book{
	string book_name;
	string isbn;
	string author_name;
	string publisher;
	public:
		Book(){};
		Book(string bname, string Isbn, string aname, string publishername){
			book_name = bname;
			isbn = Isbn;
			author_name = aname;
			publisher = publishername;
			cout<<getBookInfo()<<endl;
		}
		string getbookname(){
			return book_name;
		}
		string getisbn(){
			return isbn;
		}
		string getauthorname(){
			return author_name;
		}
		string getpublisher(){
			return publisher;
		}
		string getBookInfo(){
			string bookinfo;
			bookinfo = "Book Name: " + getbookname() + "\nAuthor Name: " + getauthorname() + "\nISBN: " + getisbn() + "\nPublisher: " + getpublisher() + "\n";
			return bookinfo;
		}
};

int main(int argc, char** argv){
	Book books[5] = { Book("Harry", "ab1234", "Author", "Publisher") , Book("Book2", "ab2345", "Author1", "Publisher1")};
	return 0;
}
