#include "pch.h"

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