#include<iostream>
using namespace std;

class students{
public :
    string name;
    string lastname;
    string branch;
    string rollno;
    string section;
    int age;

    students( string Name, string Lastname ,string Branch,string Section)
    {
        name=Name;
        lastname=Lastname;
        branch = Branch;
        rollno= "0187Ex211011";
        section = Section;
        age = 20;


    }

    void GetInfo(){

        cout<<"Name "<<name<<endl;
        cout<<"lastname "<<lastname<<endl;
        cout<<"branch "<<branch<<endl;
        cout<<"rollno "<<rollno<<endl;
        cout<<"section "<<section<<endl;
        cout<<"age "<<age<<endl;
    }
};

int main(){
    students st("Divya","paradkar","AIDS","A");
    st.rollno ="0187AD211012";
    st.age=19;
    students st1("piyush","paradkar","CSE","D");
    st1.rollno="0187CS211239";
    st1.age =23;
    students st2("sonam","chopde","poly","B");
    st2.rollno ="0187PY112123";
    st2.age =21;

    st.GetInfo();
    st1.GetInfo();
    st2.GetInfo();


}