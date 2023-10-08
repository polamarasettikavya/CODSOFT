#include <iostream>
#include <string>
using namespace std;
int main() {
    cout<<"I am a chatbox"<<endl;
   string sen;
   getline(cin,sen);
   if(sen=="hello")
   {
       cout<<"hi!how can i help you?"<<endl;
   }
  else if(sen=="what can you do?")
   {
       cout<<"I am a chatbot I can  help you to answer some questions to try ask a question"<<endl;
   }
   else
   {
       cout<<"Sorry!I dont understand"<<endl;
   }
   string sen2;
   getline(cin,sen2);
   if(sen2=="bye")
   {
       cout<<"have a good day!";
   }
   else if(sen2=="have a good day")
   {
       cout<<"thank you and wish you the same"<<endl;
   }
   else if(sen2=="what can you do?")
   {
       cout<<"I am a chatbot I can  help you to answer some questions"<<endl;
   }
    else
   {
       cout<<"Sorry!I dont understand"<<endl;
   }   
   string sen3;
   getline(cin,sen3);
   if(sen3=="bye")
   {
       cout<<"have a good day!";
   }
   else if(sen3=="have a good day")
   {
       cout<<"thank you and wish you the same"<<endl;
   }
    else
   {
       cout<<"Sorry!I dont understand"<<endl;
   }   
   return 0;
}
