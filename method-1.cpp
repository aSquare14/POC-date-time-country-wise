#include<bits/stdc++.h>
using namespace std;
int main()
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    struct lconv * lc;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    // en_SG.utf8 format is date/month/year
    printf ("Locale is: %s\n", setlocale(LC_TIME,"en_SG.utf8") );
    strftime (buffer,80,"%x",timeinfo);
    printf ("Date is: %s\n",buffer);

    // en_US.utf8 format is month/date/year
    printf ("Locale is: %s\n", setlocale(LC_TIME,"en_US.utf8") );
    strftime (buffer,80,"%x",timeinfo);
    printf ("Date is: %s\n",buffer);
    
    return 0;
}