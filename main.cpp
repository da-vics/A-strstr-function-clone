#include <iostream>
#include<cstring>
#include<vector>

using namespace std;

char *dis_find(const char *t , const char *a){    /// function......

unsigned init(0),
 temp(0) ,         /// function variables....
 count_t(0);

 for(int i = 0 ;i!=strlen(t); ++i){

    if(a[init] == t[i]){

        if(init == 0){
            temp = i;     /// assigns a starting point....
        }

        ++init;
        ++count_t;
    }

    else{
        init = 0;
        count_t = 0;   
    }

    if(init == strlen(a)){
        break;
    }

    if(t[i] == ' '  || i == strlen(t)-1 && init!=strlen(a)){

        init = 0;
        count_t =0;       //// reset values under the above conditons
    }

 }  /// end of main for loop....

 if(init>0){

    size_t get_size = strlen(t) - temp;

    char *point_char = nullptr;
    point_char = new char[get_size];   /// dynamic memory allocation....


    for(int i = temp , che = 0; i<strlen(t) ; ++i,++che){

        point_char[che] = t[i];
        }

    return point_char;
    delete [] point_char;  /// free memory

 }

 else{
    return nullptr;
 }

}///..

int main()
{
   char vic[] = "c++ programmers are awesome";

   cout<<dis_find(vic,"c++")<<endl;  /// cstring clone...ish....
 
cout<<strstr(vic,"c++");     /// the cstring function.... 
}
