#include "pch.h"
#include "mergesort.h"

TEST(TestCaseName, Test1) {
	vector<int> a = { -23, -2, 0, 5, 9, 14, 29, 98, 152 };
	vector<double> b = { -23.1, -2.6, 0, 5.8, 9.2, 14.56, 29.12, 98, 152.99 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

  EXPECT_EQ(a, a_sort);
  EXPECT_TRUE(true);

  EXPECT_EQ(b, b_sort);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, Test2) {
	vector<int> a = { 152, 98, 29, 14, 9, 5, 0, -2, -23 };
	vector<double> b = { 152.99, 98, 29.12, 14.56, 9.2, 5.8, 0, -2.6, -23.1};

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test3) {
	vector<int> a = { 4, 12, 67, 24, 547653, 19, 2, -5, -1, 0 };
	vector<double> b = { 4.1, 12.3, 67, 24.12, 54.999, 19.6, 2.2, -5.9, -1, 0 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test4) {
	vector<int> a = { -4, -12, -67, -24, -547653, -19, -2, -5, -1, 0 };
	vector<double> b = { -4.1, -12.3, -67, -24.12, -54.999, -19.6, -2.2, -5.9, -1, 0 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test5) {
	vector<int> a = { 4, 12, 67, 24, 547653, 19, 2, -5, -1, 0 };
	vector<double> b = { 4.1, 12.3, 67, 24.12, 54.999, 19.6, 2.2, -5.9, -1, 0 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test6) {
	vector<int> a = {};
	vector<double> b = {};

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test7) {
	vector<int> a = {1};
	vector<double> b = {1.5};

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test8) {
	vector<int> a = { 22, 14, 99, -2, 99 };
	vector<double> b = { 22.1, 14.2, 99.9, -2.1, 99.9 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test9) {
	vector<int> a = { -22, -14, -99, -2, -99 };
	vector<double> b = { -22.1, -14.2, -99.9, -2.1, -99.9 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test10) {
	vector<int> a = { 22, -14, -99, 2, -99, 22 };
	vector<double> b = { 22.1, -14.2, -99.9, 2.1, -99.9, 22.1 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test11) {
	vector<int> a = { 9, 14 };
	vector<double> b = { 9.1, 14.6 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test12) {
	vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101 };
	vector<double> b = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10.3, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36.2, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93.2, 94, 95, 96, 97, 98, 99, 100, 101.9 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test13) {
	vector<int> a = { 2, 1, 2, 3, 4, 5, -6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, -38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 22, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, -98, 99, 100, 101 };
	vector<double> b = { 2, 1, 2, 3, 4, 5, -6, 7, 8, 9, 10.3, 11, 12, 13, 14, 15, 16, 17, -18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36.2, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, -85, 86, 87, 88, 89, 90, 91, 92, 93.2, 1, 95, 96, 97, 98, 99, 100, 101.9 };

	merge_sort<int> lista(a);
	merge_sort<double> lista2(b);

	lista.mergesort();
	vector<int> a_sort = lista.ret();

	lista2.mergesort();
	vector<double> b_sort = lista2.ret();

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);

	EXPECT_EQ(b, b_sort);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Test14) {
	vector<char> a = { 'g', 'd', 'f', 'a', 'z', 'p', 'x', 'm', '0', '9', '&' };

	merge_sort<char> lista(a);

	lista.mergesort();
	vector<char> a_sort = lista.ret();

	sort(a.begin(), a.end());

	EXPECT_EQ(a, a_sort);
	EXPECT_TRUE(true);
}
