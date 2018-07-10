#include <iostream>
#include<cstring>
#include<vector>

using namespace std;



///vector<char>gg;

char *dis_find(const char *t , const char *a){

int init(0),
 temp(0) ,
 count_t(0);

for(int i = 0; i<strlen(t);++i){

    if(a[init] == t[i]){

        temp = i;
        ++init;
        ++count_t;

    for(int x = temp+1 ;init!=strlen(a); ++x){


        if(a[init] == t[x]){
            ++init;
            ++count_t;
        }

        else{
            count_t = 0;
    break;
        }


    } /// end....

    ///tt= init; test

    break;
    }  ///....end
}
 ///end of ist for....

if(count_t >= 1){



 int che(0);
/*
 size_t of_temp = strlen(t) - temp;

 char temp_char[of_temp];
 for(int p = temp; che!= of_temp; ++p,++che){

    temp_char[che] = t[p];
    ///gg.push_back(t[p]);
 }
temp_char[of_temp] = '\0';

char *oget = nullptr;
oget = temp_char;

 return oget;
 */
  size_t of_temp = strlen(t) - temp;

 char *temp_ptr = nullptr;

 temp_ptr = new char[of_temp];

  for(int p = temp; che!= of_temp; ++p,++che){

 temp_ptr[che] = t[p];
}


return temp_ptr;
delete [] temp_ptr;

}/// if ends....
else{
    return nullptr;
}

}


int main()
{



   char vic[] = "victor";

   cout<<dis_find(vic,"c");



}
