#include <iostream>
#include <vector>
#include <math.h>
/* String functions section */

// Splits a single string on separator into a vector of strings
std::vector<std::string> Split(std::string whole, std::string separator)
{
  std::vector<std::string> result;
  size_t pos = 0;
  while ((pos = whole.find(separator)) != std::string::npos)
  {
    result.push_back(whole.substr(0, pos));
    whole.erase(0, pos + separator.length());
  }
  result.push_back(whole);
  return result;
}

// takes two strings and returns a new string that is the result of removing all occurrences of s2 from s1.
std::string RemoveAllSubstrings(std::string s1, std::string s2)
{
  size_t pos = 0;
  while ((pos = s1.find(s2)) != std::string::npos)
  {
    s1.erase(pos, s2.length());
  }
  return s1;
}

// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
std::string RemoveFirstSubstring(std::string s1, std::string s2)
{
  size_t pos = s1.find(s2);
  if (pos != std::string::npos)
  {
    s1.erase(pos, s2.length());
  }
  return s1;
}

// Joins all strings in a vector together, using the glue string in between them
std::string Join(std::vector<std::string> pieces, std::string glue)
{
  std::string result = "";
  for (int i = 0; i < (int)pieces.size(); i++)
  {
    result += pieces[i];
    if (i != (int)pieces.size() - 1)
    {
      result += glue;
    }
  }
  return result;
}

// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b)
{
  std::vector<int> result;
  for (int i = 0; i < (int)a.size(); i++)
  {
    bool found = false;
    for (int j = 0; j < (int)b.size(); j++)
    {
      if (a[i] == b[j])
      {
        found = true;
        break;
      }
    }
    if (!found)
    {
      result.push_back(a[i]);
    }
  }
  return result;
}

// divides an input integer by 2 until it is impossible to do so, then returns the final number.
// (16 = 2 * 2 * 2 * 2 * 1 -> 1, 7 -> 7, 26 = 2 * 13 -> 13, 52 = 2 * 2 * 13 -> 13)
int RemoveTwos(int original)
{
  while (original % 2 == 0)
  {
    original /= 2;
  }
  return original;
}

// takes a vector of integers and removes all elements evenly divisible by the passed in int
std::vector<int> MultiplesFilter(std::vector<int> v, int divides_by)
{
  std::vector<int> result;
  for (int i = 0; i < (int)v.size(); i++)
  {
    if (v[i] % divides_by != 0)
    {
      result.push_back(v[i]);
    }
  }
  return result;
}

// returns a vector with true for even numbers and false for odd numbers
std::vector<bool> EvenMask(std::vector<int> nums)
{
  std::vector<bool> result;
  for (int i = 0; i < (int)nums.size(); i++)
  {
    result.push_back(nums[i] % 2 == 0);
  }
  return result;
}

// returns a vector with true for odd numbers and false for even numbers
std::vector<bool> OddMask(std::vector<int> nums)
{
  std::vector<bool> result;
  for (int i = 0; i < (int)nums.size(); i++)
  {
    result.push_back(nums[i] % 2 != 0);
  }
  return result;
}

// Sums all numbers in a vector and returns the resulting value
int Sum(std::vector<int> nums)
{
  int sum = 0;
  for (int i = 0; i < (int)nums.size(); i++)
  {
    sum += nums[i];
  }
  return sum;
}

// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums)
{
  int product = 1;
  for (int i = 0; i < (int)nums.size(); i++)
  {
    product *= nums[i];
  }
  return product;
}

// Adds an integer n to each element of a given vector
std::vector<int> VectorPlusN(std::vector<int> v, int n)
{
  for (int i = 0; i < (int)v.size(); i++)
  {
    v[i] += n;
  }
  return v;
}

// Multiples an integer n with each element of a given vector
std::vector<int> VectorTimesN(std::vector<int> v, int n)
{
  for (int i = 0; i < (int)v.size(); i++)
  {
    v[i] *= n;
  }
  return v;
}

// takes in two integers and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
std::vector<int> Multiples(int n, int m)
{
  std::vector<int> result;
  for (int i = 1; i <= m; i++)
  {
    result.push_back(n * i);
  }
  return result;
}

// takes an integer n that is >= 0 and returns a vector of all squares up to n^n (1^1, 2^2, 3^3, .... n^n)
std::vector<int> SquaresUntil(int n)
{
  std::vector<int> result;
  for (int i = 1; i <= n; i++)
  {
    result.push_back(i * i);
  }
  return result;
}

// takes an int, n, and returns the nth value of the fibonacci sequence (1, 1, 2, 3, 5, 8, 13, ...)
int NthFibonacci(int n)
{
  if (n <= 1)
    return n;
  return NthFibonacci(n - 1) + NthFibonacci(n - 2);
}

// takes an int, n, and returns the factorial of that int (n!)
int Factorial(int n)
{
  if (n > 1)
    return n * Factorial(n - 1);
  else
    return 1;
}

// returns -1 if the number is negative and 1 if positive
int Sign(int num)
{
  return num < 0 ? -1 : 1;
}

// takes two vectors of doubles, a and b. The function then removes elements from a if they are also in b.
// If the double is in b, but not in a, nothing happens.
std::vector<double> MatchVectors(std::vector<double> a, std::vector<double> b)
{
  std::vector<double> result;
  for (int i = 0; i < (int)a.size(); i++)
  {
    bool found = false;
    for (int j = 0; j < (int)b.size(); j++)
    {
      if (a[i] == b[j])
      {
        found = true;
        break;
      }
    }
    if (!found)
    {
      result.push_back(a[i]);
    }
  }
  return result;
}

// takes a vector of doubles and removes all elements evenly divisible by the passed in double
std::vector<double> MultiplesFilter(std::vector<double> v, double divides_by)
{
  std::vector<double> result;
  for (int i = 0; i < (int)v.size(); i++)
  {
    if (v[i] / divides_by != floor(v[i] / divides_by))
    {
      result.push_back(v[i]);
    }
  }
  return result;
}

// returns a vector with true for numbers greater than the second parameters and false for those less than or equal to
std::vector<bool> GreaterMask(std::vector<double> nums, double greater_than)
{
  std::vector<bool> result;
  for (int i = 0; i < (int)nums.size(); i++)
  {
    result.push_back(nums[i] > greater_than);
  }
  return result;
}

// returns a vector with true for numbers less than the second parameters and false for those greater than or equal to
std::vector<bool> LessMask(std::vector<int> nums, int less_than)
{
  std::vector<bool> result;
  for (int i = 0; i < (int)nums.size(); i++)
  {
    result.push_back(nums[i] < less_than);
  }
  return result;
}

// Sums all numbers in a vector and returns the resulting value
double Sum(std::vector<double> nums)
{
  double sum = 0;
  for (int i = 0; i < (int)nums.size(); i++)
  {
    sum += nums[i];
  }
  return sum;
}

// Multiplies all numbers in a vector together and returns the resulting value
double Product(std::vector<double> nums)
{
  double product = 1;
  for (int i = 0; i < (int)nums.size(); i++)
  {
    product *= nums[i];
  }
  return product;
}

// Adds an double n to each element of a given vector
std::vector<double> VectorPlusN(std::vector<double> v, double n)
{
  for (int i = 0; i < (int)v.size(); i++)
  {
    v[i] += n;
  }
  return v;
}

// Multiples an double n with each element of a given vector
std::vector<double> VectorTimesN(std::vector<double> v, double n)
{
  for (int i = 0; i < (int)v.size(); i++)
  {
    v[i] *= n;
  }
  return v;
}

// takes in two doubles and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
std::vector<double> Multiples(double n, double m)
{
  std::vector<double> result;
  for (int i = 1; i <= m; i++)
  {
    result.push_back(n * i);
  }
  return result;
}

// returns -1 if the number is negative and 1 if positive
double Sign(double num)
{
  return num < 0 ? -1 : 1;
}

// adds n to each element of the vector
std::vector<int> AddN(std::vector<int> v, int n)
{
  for (int i = 0; i < (int)v.size(); i++)
  {
    v[i] += n;
  }
  return v;
}

// adds n to each element of the vector
std::vector<double> AddN(std::vector<double> v, double n)
{
  for (int i = 0; i < (int)v.size(); i++)
  {
    v[i] += n;
  }
  return v;
}

// adds n to each element of the vector
std::vector<std::string> AddN(std::vector<std::string> v, std::string n)
{
  for (int i = 0; i < (int)v.size(); i++)
  {
    v[i] += n;
  }
  return v;
}

// subtracts n to each element of the vector
std::vector<int> SubtractN(std::vector<int> v, int n)
{
  for (int i = 0; i < (int)v.size(); i++)
  {
    v[i] -= n;
  }
  return v;
}

// subtracts n to each element of the vector
std::vector<double> SubtractN(std::vector<double> v, double n)
{
  for (int i = 0; i < (int)v.size(); i++)
  {
    v[i] -= n;
  }
  return v;
}
