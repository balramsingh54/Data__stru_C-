#include <iostream>
#include <unordered_map>

using namespace std;

class node
{
public:
	char data;
	unordered_map<char,node*> h;
	bool isTerminate;
	node(char d){
		data =d;
		isTerminate = false;
	}	
};

class Trie
{	node* root;
	public:

		Trie(){
			root = new node('\0');
		};

	void insertWord(string user_name ,string word){
		node *temp = root;
		for (int i = 0; i < word.length(); i++)
		{
			char ch = word[i];
			if(temp->h.count(ch)==0){

				node *child = new node(ch);
				temp->h[ch] = child;
				temp = child;
			}
			else{
				temp = temp->h[ch];
			}
		}
		temp->isTerminate = true;

	}
	
	bool search(string word){
		node *temp = root;
		for (int i = 0; i < word.length(); i++)
		{
			char ch = word[i];
			if(temp->h.count(ch)){
				temp = temp->h[ch];
			}
			else{
				return false;
			}
		}
		return temp->isTerminate;
	}
	
};

int main(int argc, char const *argv[])
{
	Trie t;
	t.insertWord(99999,"apple");
	t.insertWord(99998,"mango");
	t.insertWord(99997,"grape");
	t.insertWord(99996,"banana");
	if(t.search("app")){
		cout<<name<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	return 0;
}