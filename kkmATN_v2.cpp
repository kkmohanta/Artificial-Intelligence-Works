#include <bits/stdc++.h>
using namespace std;

//initial db
string article[] = {"a","an","the"};
string pronoun[] = {"he","she","it","they"};
string noun[] = {"elephant","cat","dog","kkm","fish","cake"};
string verb[] = {"eats","eating","reads","writing","drinking","barking"};
string adjective[] = {"old","young","happily","loudly"};
string auxverb[] = {"is","was"};
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
int isProNoun(string s){
	int i;
	for(i=0;i<sizeof(pronoun)/sizeof(pronoun[0]);i++){
		if(s.compare(pronoun[i])==0) return 1;
	}
	return 0;
}
int isArt(string s){
	int i;
	for(i=0;i<sizeof(article)/sizeof(article[0]);i++){
		if(s.compare(article[i])==0) return 1;
	}
	return 0;
}
int isAdj(string s){
	int i;
	for(i=0;i<sizeof(adjective)/sizeof(adjective[0]);i++){
		if(s.compare(adjective[i])==0) return 1;
	}
	return 0;
}
int isAuxVerb(string s){
	int i;
	for(i=0;i<sizeof(auxverb)/sizeof(auxverb[0]);i++){
		if(s.compare(auxverb[i])==0) return 1;
	}
	return 0;
}

int main(){
	//start atn implementation -KKM
	string in,s;
	int kk=10;
	while(kk--){
	cout<<"Enter a sentence : ";
	getline( cin, in );
	//cout<<in<<endl;
	//tokenize
	istringstream iss(in);
	vector<string> v;
	int f=0;
	do{
		iss>>s;
		v.push_back(s);
	}while(iss);
	
	if(v.size()>=6 && isArt(v[0]) && isNoun(v[1]) && isAuxVerb(v[2]) && isVerb(v[3]) && isNoun(v[4]) && isAdj(v[5])) cout<<"Success. Article->Noun->AuxVerb->Verb->Noun->Adjective"<<endl;
	else if(v.size()>=5 && isArt(v[0]) && isNoun(v[1]) && isAuxVerb(v[2]) && isVerb(v[3]) && isNoun(v[4])) cout<<"Success. Article->Noun->AuxVerb->Verb->Noun"<<endl;
	else if(v.size()>=4 && isProNoun(v[0]) && isAuxVerb(v[1]) && isVerb(v[2]) && isNoun(v[3])) cout<<"Success. ProNoun->AuxVerb->Verb->Noun"<<endl;
	else if(v.size()>=3 && isProNoun(v[0]) && isAuxVerb(v[1]) && isVerb(v[2])) cout<<"Success. ProNoun->AuxVerb->Verb"<<endl;
	else if(v.size()>=2 && isNoun(v[0]) && isVerb(v[1])) cout<<"Success. Noun->Verb"<<endl;
	else  cout<<"Can't be accepted."<<endl;
	//end
	cout<<endl<<endl;
}
	return 0;
}

/*
kkm reads
the cat is eating fish
he is writing
she was eating cake
a dog was barking loudly
*/
