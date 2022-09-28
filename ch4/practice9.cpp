#include<iostream>
#include<string>
using namespace std;

class Person{
    string name;
    string tel;

    public:
        Person(){}
        string getName(){ return name;}
        string getTel(){return tel;}
        void set(string name, string tel);

};
void Person::set(string name, string tel){
    this->name = name;
    this->tel = tel;
}

int main(){
    Person *p = new Person[3];
    cout<<"이름과 전화번호를 입력해 주세요"<<endl;
    string name;
    string tel;
    for(int i = 0; i<3; i++){
        cout<<"사람 "<<i+1<<">>";
        cin>>name>>tel;
        p[i].set(name,tel);
        cout<<endl;
    }
    cout<<"모든 사람의 이름은 "<<p[0].getName()+" "+p[1].getName()+" "+p[2].getName()<<endl;
    cout<<"전화번호 검색합니다. 이름을 입력해주세요>>";
    string searchtel;
    cin>>searchtel;
    for(int j = 0; j<3; j++){
        if(p[j].getName() == searchtel){
            cout<<"전화번호는 "<<p[j].getTel()<<endl;
            break;
        }else{
            continue;
        }
    }

}