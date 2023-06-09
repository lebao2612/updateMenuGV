#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<iomanip>

using namespace std;

struct Account {
	string user;
	string pass;
	Account* pnext;
};

struct AccountList {
	Account* Head;
	Account* Tail;
};

struct Node {
	string MaMH;
	Node* pnext;
};

struct MonHoc {
	Node* Head;
	Node* Tail;
};

struct SinhVien {
	int No;
	string MSSV;
	string Ten;
	string Ho;
	string Gioitinh;
	string Ngaysinh;
	string ID;
	MonHoc data;
};

struct Class {
	string maLop;
	Class* pnext;
};

struct ClassList {
	Class* Head;
	Class* Tail;
};

struct Course {
	string maMH;
	string tenMH;
	string tenLop;
	string tenGV;
	int soTin;
	int soLuongMax;
	int namHoc;
	//int thuHoc;
	string gioHoc;
	Course* pnext;
};

struct CourseList {
	Course* Head;
	Course* Tail;
};


bool checkLoginGV(string a, string b);
bool checkLoginSV(string a, string b);
void login(AccountList& accountlistGV, AccountList& accountlistSV, SinhVien sv[], int n);
void InitAccountListGV(AccountList& accountlistGV);
void InitAccountListSV(AccountList& accountlistSV);
Account* CreateAccount(string a, string b);
bool checkAccountListGV(AccountList accountlistGV);
bool checkAccountListSV(AccountList accountlistSV);
void saveAccountGV(AccountList& accountlistGV);
void saveAccountSV(AccountList& accountlistSV);
void changePass(string a, string c, AccountList& accountlist);
void readAccount(string a, SinhVien sv[], int n);
void khoiTao(SinhVien sv[], int n);
int demSV();
void luuMonHocvaoList(SinhVien sv[], int n);
void xoaMonHocSV(string a, string b, SinhVien sv[], int n);
void luuMonHocvaoFile(SinhVien sv[], int n);
void readCourseAccount(string a, SinhVien sv[], int n);
void menuHS(string a, SinhVien sv[], int n, AccountList& accountlistSV);
void menuGV(string a, SinhVien sv[], int n, AccountList& accountlistGV);
void taoNamHocMoi();
void khoiTaoClassList(ClassList& classlist);
void khoiTaoCourseList(CourseList& courselist);
void xuatThongTinSVCuaLop(string a);
void xuatDanhSachCacLop(ClassList classlist);
Class* CreateClass(string a);
bool checkClassList(ClassList classlist);
void saveClassList(ClassList& classlist);
void taoLopHocMoi();
void themHocSinhVaoLopbangFile(SinhVien sv[]);
void themHocSinhVaoLopThuCong(SinhVien sv[]);
void menuThaoTacCacLop(SinhVien sv[], string a);
void saveSVVaoFile(string a, SinhVien sv[]);