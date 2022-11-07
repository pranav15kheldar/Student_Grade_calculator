#include<iostream>
using namespace std;
class student 
{
    private:
            int Roll;
            char sname[50];
            int marks[5];

    public:
            void setRoll()
            {
                cout<<"Roll Number:";
                cin>>Roll;
            }
            void setsname()
            {
                cout<<"Name:";
                cin.get(sname,50);
                cin.ignore();
            }
            void setmarks()
            {
                cout<<"Enter Marks:-";
                for(int i=0;i<5;i++)
                {
                    if((i+1)==1)
                    {
                        cout<<"\n\tMaths III:";
                        cin>>marks[i];
                    }
                    else if((i+1)==2)
                    {
                        cout<<"\tEDC:";
                        cin>>marks[i];
                    }
                    else if((i+1)==3)
                    {
                        cout<<"\tEMW:";
                        cin>>marks[i];
                    }
                    else if((i+1)==4)
                    {
                        cout<<"\tDSD:";
                        cin>>marks[i];
                    }
                    else if((i+1)==5)
                    {
                        cout<<"\tOOP:";
                        cin>>marks[i];
                    }
                }
            }
            int getroll()
            {
                return Roll;
            }
            char getNS()
            {
                return sname[50];
            }

            int getMarks()
            {
                return marks[5];
            }
            int display()
            {
                cout<<"Name:"<<sname<<endl;
                cout<<"Roll Number:"<<Roll<<endl;
                cout<<"Marks:";
                     for(int i=0;i<5;i++)
                {
                    if((i+1)==1)
                    {
                        cout<<"\n\tMaths III:"<<marks[i]<<endl;
                    }
                    else if((i+1)==2)
                    {
                        cout<<"\tEDC:"<<marks[i]<<endl;
                    }
                    else if((i+1)==3)
                    {
                        cout<<"\tEMW:"<<marks[i]<<endl;
                    }
                    else if((i+1)==4)
                    {
                        cout<<"\tDSD:"<<marks[i]<<endl;
                    }
                    else if((i+1)==5)
                    {
                        cout<<"\tOOP:"<<marks[i]<<endl;
                    }
                }
                return 0;
            }
            int total();
            int grade();
};
int student::total()
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    return sum;
}
int student::grade()
{
    if(student::total()/5<40)
    {
        cout<<"\nGrade is C";
    }
    else if(student::total()/5>40 && student::total()/5<80)
    {
        cout<<"\nGrade is B";
    }
    else
    {
        cout<<"\nGrade is A";
    }
    return 0;
}
int main()
{
    student s1;
    s1.setsname();
    s1.setRoll();
    s1.setmarks();
    cout<<"-----------------------------\n";
    s1.display();
    cout<<"\n-----------------------------";
    cout<<"\nTotal is:"<<s1.total();
    s1.grade();
    return 0;
}
