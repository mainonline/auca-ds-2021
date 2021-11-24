#include <bits/stdc++.h>

using namespace std;

class BigInt
{
public:
  bool isNeg = false;
  string num = "0";

  BigInt() {}

  BigInt(const BigInt &other)
  {
    this->isNeg = other.isNeg;
    this->num = other.num;
  }

  BigInt(int num)
  {
    if (num < 0)
    {
      this->isNeg = true;
      num *= -1;
    }

    if (num == 0)
    {
      this->num = "0";
      return;
    }

    this->num = "";

    while (num > 0)
    {
      this->num += (num % 10) + '0';
      num /= 10;
    }
  }

  BigInt(const char *num)
  {
    string num_(num);
    *(this) = num_;
  }

  BigInt(string num)
  {
    while (num[0] == '-')
    {
      this->isNeg = !this->isNeg;
      num.erase(0, 1);
    }

    reverse(num.begin(), num.end());

    while (num.size() > 1 && num[num.size() - 1] == '0')
      num.erase(num.size() - 1, num.size());

    if (num == "")
      num = "0";

    this->num = num;

    if (num == "0")
      this->isNeg = false;
  }

  friend istream &operator>>(istream &in, BigInt &bigint)
  {
    string num;
    in >> num;
    bigint = move(num);
    return in;
  }

  friend ostream &operator<<(ostream &out, const BigInt &bigint)
  {
    string num = bigint.num;
    reverse(num.begin(), num.end());

    if (bigint.isNeg)
      num = '-' + num;

    out << num;

    return out;
  }

  friend bool operator==(const BigInt first, const BigInt second)
  {
    return first.num == second.num && second.isNeg == first.isNeg;
  }
};

int main()
{
  cout << "-- comparison --" << endl;

  // BigInt fBig("123123123123123123121231231231231243434343431");
  // BigInt sBig("12312312312312312312123123123123124343434343");
  BigInt fBig;
  BigInt sBig;

  cin >> fBig >> sBig;
  bool t = fBig == sBig;
  if (t)
  {
    cout << fBig << " -- == -- " << sBig << endl;
  }
  else
  {
    cout << fBig << " -- != -- " << sBig << endl;
  }
}