// #include<iostream>
// int main(){
//     std::cout << "hey hai" << std::endl << "hello" << std::endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout << "hey hai" << endl << "hello" << endl;
//     cout << "Bye";
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     cout << "hey hai" << endl << "hello";
//     cout << "Bye";
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin >> x;
//     cout << "Value of x: " << x;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin >> x >> y;
//     cout << "Value of x: " << x << "and y: " << y;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x =5.2;
//     long long y = 13435672134;
//     cout << x << "\n" << y;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     float x =5;
//     double y = 13435672134;
//     cout << x << "\n" << y;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;
//     cout << s;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin >> s1 >> s2;
//     cout << s1 << " " << s2;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     getline(cin, str);
//     cout << str;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
// int age;
// cin >> age;
// if(age >=18){
// cout << "You are an adult!";
// }
// else{
// cout << "You are not an adult!";
// }
// return 0;
// }


#include<iostream>
using namespace std;
int main() {
int marks;
cin >> marks;
if(marks >=80 && marks <=100){
cout << "GRADE A";
}
else if(marks >=60 && marks <=79){
cout << "GRADE B";
}
else if(marks >=50 && marks <=59){
cout << "GRADE C";
}
else if(marks >=45 && marks <=49){
cout << "GRADE D";
}
else if(marks >=25 && marks <=44){
cout << "GRADE E";
}
else if(marks <=25 && marks >=0){
cout << "GRADE F";
}
else{
cout << "Invalid Marks";
}
return 0;
}