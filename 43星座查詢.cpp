#include<iostream>
using namespace std;

string getZodiac(int month, int day) 
{
    if((month == 1 && day >= 21) || (month == 2 && day <= 18)) return "Aquarius";      // 水瓶
    if((month == 2 && day >= 19) || (month == 3 && day <= 20)) return "Pisces";        // 雙魚
    if((month == 3 && day >= 21) || (month == 4 && day <= 20)) return "Aries";         // 牡羊
    if((month == 4 && day >= 21) || (month == 5 && day <= 21)) return "Taurus";        // 金牛
    if((month == 5 && day >= 22) || (month == 6 && day <= 21)) return "Gemini";        // 雙子
    if((month == 6 && day >= 22) || (month == 7 && day <= 22)) return "Cancer";        // 巨蟹
    if((month == 7 && day >= 23) || (month == 8 && day <= 23)) return "Leo";           // 獅子
    if((month == 8 && day >= 24) || (month == 9 && day <= 23)) return "Virgo";         // 處女
    if((month == 9 && day >= 24) || (month == 10 && day <= 23)) return "Libra";        // 天秤
    if((month == 10 && day >= 24) || (month == 11 && day <= 22)) return "Scorpio";     // 天蠍
    if((month == 11 && day >= 23) || (month == 12 && day <= 21)) return "Sagittarius"; // 射手
    if((month == 12 && day >= 22) || (month == 1 && day <= 20)) return "Capricorn";    // 摩羯
    return "Error"; 
}

int main() 
{
    int month, day;
    cin >> month >> day;
    cout << getZodiac(month, day) << endl;
    return 0;
}
