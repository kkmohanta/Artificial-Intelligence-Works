#include <bits/stdc++.h>
using namespace std;

//initial db
string article[] = {"a","an","the"};
string pronoun[] = {"he","she","it","they"};
string noun[] = {"elephant","cat","dog","kkm"};
string verb[] = {"eats","eating","reads"};
string adjective[] = {"old","young"};
string auxverb[] = {"is","was",""};
string preposition[] = {"on","in","under"};

int isVerb(string s){
	int i;
	for(i=0;i<sizeof(verb)/sizeof(verb[0]);i++){
		if(s.compare(verb[i])==0) return 1;
	}
	return 0;
}
int isNoun(string s){
	int i;
	for(i=0;i<sizeof(noun)/sizeof(noun[0]);i++){
		if(s.compare(noun[i])==0) return 1;
	}
	return 0;
}

int main(){
	//start atn implementation -KKM
	string in,s;
	cout<<"Enter a sentence : ";
	getline( cin, in );
	cout<<in<<endl;
	//tokenize
	istringstream iss(in);
	int f=1,c=0;
	do{
		iss>>s;
		cout<<s<<endl;
		c++;
		switch(c){
			case 1: {
				if(isNoun(s)==0) f=0;
				break;
			}
			case 2: {
				if(isVerb(s)==0) f=0;
				break;
			}
		}
	}while(iss && f);
	//printing output
	if(f) cout<<"Success."<<endl;
	else  cout<<"Can't be accepted."<<endl;
	//end
	return 0;
}
