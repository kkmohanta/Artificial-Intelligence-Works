#include <bits/stdc++.h>
using namespace std;

string data[][2]={{"headache","crocin 500"},{"acid","eno"},{"indigestion","Ruby dlsr 200"},{"cold","Nam-cold 600"},{"pain","Anthroks pain killer"}};

int search(string qry){
	istringstream iss(qry);
	vector<string> tokens;
	copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(tokens));
	
	int ll=sizeof(data)/4;
	
	for(int i=0;i<tokens.size();i++){
		//cout<<tokens[i]<<endl;
		for(int j=0;j<5;j++){
			if(data[j][0].compare(tokens[i])==0){
				return j;
			}
		}
	}
	return -1;
	
}

string hi[]={"Hi","Hello","How r u?","I m f9. U?","HOWS ALL GOING?"};

int main(){
	//kkm chat bot- time pass
	int kk,len=sizeof(hi)/4;
	string user="HI";
	cout<<"\n\nKKM> My domain is Health Care.\n";
	cout<<"\n\nKKM> "<<hi[rand()%len]<<endl;
	while(user.compare("bye")!=0){
		cout<<"\nYou>> ";
		getline(cin, user);
		//cout <<"\"" <<user <<"\"" <<endl;
		kk=search(user);
		int ch=rand()%3;
		if(kk==-1){
			if(user.compare("bye")==0)break;
			if(rand()%2==0){
				cout<<"\n\nKKM> My domain in medicine. Lets talk about it. Do u have any health problems??"<<endl;
			}else{
				cout<<"\n\nKKM> I m not getting u. Hows ur health?"<<endl;
			}
		}
		else if(ch==0){
			cout<<"\n\nKKM> In case of "<<data[kk][0]<<" problems "<<data[kk][1]<<" works best."<<endl;
		}else if(ch==1){
			cout<<"\n\nKKM> "<<data[kk][1]<<" works best for "<<data[kk][0]<<" problems."<<endl;
		}else{
			cout<<"\n\nKKM> U should take "<<data[kk][1]<<" medicine to get over "<<data[kk][0]<<"."<<endl;
		}
		
	}
	cout<<"\n\nKKM> Bye. Take care!"<<endl;
	return 0;
}


