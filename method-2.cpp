/*
DMY - date/month/year
YMD - year/month/date
MDY - month/date/year
*/
#include<bits/stdc++.h>
using namespace std;
unordered_map<string,string> country_date_format({
        {"India","DMY"},
        {"China","YMD"},
        {"USA","MDY"}
});
void extractDateMonthYear(string country, string date)
{
    string correct_date;
    string correct_month;
    string year;
    if(country_date_format[country]=="DMY")
    {
        correct_date = date.substr(0,2);
        correct_month = date.substr(3,2);
        year = date.substr(6,4);
    }
    else if(country_date_format[country]=="MDY")
    {
        correct_date = date.substr(3,2);
        correct_month = date.substr(0,2);
        year = date.substr(6,4);
    }
    else
    {
        correct_date = date.substr(8,2);
        correct_month = date.substr(5,2);
        year = date.substr(0,4);           
    }
    cout<<"Month:"<<correct_month<<" Date:"<<correct_date<<" Year:"<<year<<endl;
}
int main()
{
    extractDateMonthYear("India","01/03/2020");
    extractDateMonthYear("USA","01/03/2020");
    extractDateMonthYear("China","2020/01/03");  
}