#ifndef FUNCTIONS_TO_IMPLEMENT_HPP
#define FUNCTIONS_TO_IMPLEMENT_HPP

#include <iostream>
#include <vector>
#include <string>

// Function declarations
std::vector<std::string> Split(std::string whole, std::string separator);
std::string RemoveAllSubstrings(std::string s1, std::string s2);
std::string RemoveFirstSubstring(std::string s1, std::string s2);
std::string Join(std::vector<std::string> pieces, std::string glue);
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);
int RemoveTwos(int original);
std::vector<int> MultiplesFilter(std::vector<int>, int divides_by);
std::vector<bool> EvenMask(std::vector<int>);
std::vector<bool> OddMask(std::vector<int>);
int Sum(std::vector<int> nums);
int Product(std::vector<int> nums);
std::vector<int> VectorPlusN(std::vector<int> v, int n);
std::vector<int> VectorTimesN(std::vector<int> v, int n);
std::vector<int> Multiples(int n, int m);
std::vector<int> SquaresUntil(int n);
int NthFibonacci(int n);
int Factorial(int n);
int Sign(int num);
std::vector<double> MatchVectors(std::vector<double> a, std::vector<double> b);
std::vector<double> MultiplesFilter(std::vector<double>, double divides_by);
std::vector<bool> GreaterMask(std::vector<double> nums, double greater_than);
std::vector<bool> LessMask(std::vector<int> nums, int less_than);
double Sum(std::vector<double> nums);
double Product(std::vector<double> nums);
std::vector<double> VectorPlusN(std::vector<double> v, double n);
std::vector<double> VectorTimesN(std::vector<double> v, double n);
std::vector<double> Multiples(double n, double m);
double Sign(double num);
std::vector<int> AddN(std::vector<int> v, int n);
std::vector<double> AddN(std::vector<double> v, double n);
std::vector<std::string> AddN(std::vector<std::string> v, std::string n);
std::vector<int> SubtractN(std::vector<int> v, int n);
std::vector<double> SubtractN(std::vector<double> v, double n);

#endif