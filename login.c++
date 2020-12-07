#include <iostream>

using namespace std;




class LoginMenager {
  public:

      LoginMenager(){
          Give_acces = 0;
      }

      void login(){
      cout<<"Enter your username"<<endl;
      cout<<""<<endl;
      cout<<"Usrename: ";
      cin>>username;
      string informacii;

      if(username==realusername){
        cout<<"Password: ";
        cin>>password;
  if(password==realpassword){
                cout<<""<<endl;
        cout<<""<<endl;
            cin>>informacii;
            if( informacii == "ip_address" ){
                cout<<"46.217.190.96"<<endl;
            }
            else if(informacii== "licni_informacii"){
                cout<<"David Miloshoski 13 godini Skopje Makedonija"<<endl;
            }
            else if(informacii== "passwordi" ){
                cout<<"Error 404"<<endl;
            }
        }



        }
      }

  private:
    string username;
      string password;
    string realpassword = "Miloshoski";
    string realusername = "David";
    bool Give_acces;
    };

int main()
{
    system("color f3");
   LoginMenager Lm;

   Lm.login();


}
