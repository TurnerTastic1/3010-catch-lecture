#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() function
#include "catch.hpp"
#include "functions_to_implement.hpp"

TEST_CASE("Test NthFibonacci function")
{
  REQUIRE(NthFibonacci(0) == 0);
  REQUIRE(NthFibonacci(1) == 1);
  REQUIRE(NthFibonacci(2) == 1);
  REQUIRE(NthFibonacci(3) == 2);
  REQUIRE(NthFibonacci(4) == 3);
}

TEST_CASE("Test Factorial function")
{
  REQUIRE(Factorial(5) == 120);
  REQUIRE(Factorial(6) == 720);
  REQUIRE(Factorial(7) == 5040);
  REQUIRE(Factorial(8) == 40320);
  REQUIRE(Factorial(9) == 362880);
}

TEST_CASE("Test Sign (int) function")
{
  REQUIRE(Sign(-1) == -1);
  REQUIRE(Sign(1) == 1);
}

TEST_CASE("Test LessMask (int) function")
{
  std::vector<int> nums = {10, 20, 30, 40, 50};
  std::vector<bool> less = LessMask(nums, 30);
  REQUIRE(less[0] == true);
  REQUIRE(less[1] == true);
  REQUIRE(less[2] == false);
  REQUIRE(less[3] == false);
  REQUIRE(less[4] == false);
}

TEST_CASE("Test Sum (double) function")
{
  std::vector<double> nums = {10.0, 20.0, 30.0, 40.0, 50.0};
  REQUIRE(Sum(nums) == 150.0);
}

TEST_CASE("Test Product (double) function")
{
  std::vector<double> nums = {10.0, 20.0, 30.0, 40.0, 50.0};
  REQUIRE(Product(nums) == 12000000.0);
}

TEST_CASE("Test VectorPlusN (double) function")
{
  std::vector<double> v = {10.0, 20.0, 30.0, 40.0, 50.0};
  std::vector<double> added = VectorPlusN(v, 5.0);
  REQUIRE(added[0] == 15.0);
  REQUIRE(added[1] == 25.0);
  REQUIRE(added[2] == 35.0);
  REQUIRE(added[3] == 45.0);
  REQUIRE(added[4] == 55.0);
}

TEST_CASE("Test VectorTimesN (double) function")
{
  std::vector<double> v = {10.0, 20.0, 30.0, 40.0, 50.0};
  std::vector<double> multiplied = VectorTimesN(v, 5.0);
  REQUIRE(multiplied[0] == 50.0);
  REQUIRE(multiplied[1] == 100.0);
  REQUIRE(multiplied[2] == 150.0);
  REQUIRE(multiplied[3] == 200.0);
  REQUIRE(multiplied[4] == 250.0);
}

TEST_CASE("Test Multiples (double) function")
{
  std::vector<double> multiples = Multiples(5.0, 5.0);
  REQUIRE(multiples[0] == 5.0);
  REQUIRE(multiples[1] == 10.0);
  REQUIRE(multiples[2] == 15.0);
  REQUIRE(multiples[3] == 20.0);
  REQUIRE(multiples[4] == 25.0);
}

TEST_CASE("Test Sign (double) function")
{
  REQUIRE(Sign(-1.0) == -1);
  REQUIRE(Sign(1.0) == 1);
}

TEST_CASE("Test AddN (int) function")
{
  std::vector<int> v = {10, 20, 30, 40, 50};
  std::vector<int> added = AddN(v, 5);
  REQUIRE(added[0] == 15);
  REQUIRE(added[1] == 25);
  REQUIRE(added[2] == 35);
  REQUIRE(added[3] == 45);
  REQUIRE(added[4] == 55);
}

TEST_CASE("Test AddN (double) function")
{
  std::vector<double> v = {10.0, 20.0, 30.0, 40.0, 50.0};
  std::vector<double> added = AddN(v, 5.0);
  REQUIRE(added[0] == 15.0);
  REQUIRE(added[1] == 25.0);
  REQUIRE(added[2] == 35.0);
  REQUIRE(added[3] == 45.0);
  REQUIRE(added[4] == 55.0);
}

TEST_CASE("Test AddN (string) function")
{
  std::vector<std::string> v = {"10", "20", "30", "40", "50"};
  std::vector<std::string> added = AddN(v, "5");
  REQUIRE(added[0] == "105");
  REQUIRE(added[1] == "205");
  REQUIRE(added[2] == "305");
  REQUIRE(added[3] == "405");
  REQUIRE(added[4] == "505");
}

TEST_CASE("Test SubtractN (int) function")
{
  std::vector<int> v = {10, 20, 30, 40, 50};
  std::vector<int> subtracted = SubtractN(v, 5);
  REQUIRE(subtracted[0] == 5);
  REQUIRE(subtracted[1] == 15);
  REQUIRE(subtracted[2] == 25);
  REQUIRE(subtracted[3] == 35);
  REQUIRE(subtracted[4] == 45);
}

TEST_CASE("Test SubtractN (double) function")
{
  std::vector<double> v = {10.0, 20.0, 30.0, 40.0, 50.0};
  std::vector<double> subtracted = SubtractN(v, 5.0);
  REQUIRE(subtracted[0] == 5.0);
  REQUIRE(subtracted[1] == 15.0);
  REQUIRE(subtracted[2] == 25.0);
  REQUIRE(subtracted[3] == 35.0);
  REQUIRE(subtracted[4] == 45.0);
}