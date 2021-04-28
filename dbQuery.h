#pragma once
#include <vector>
#include <iostream>
#include <string>

using namespace std;
using namespace System;
using namespace System::Data::OleDb;
using namespace System::Windows::Forms;

/*���������� ������ �����������*/
String^ StringConnection();

/*���������� ������ � id ������ ������*/
String^ SelectID(
	OleDbConnection^ dbConnection, 
	String^ SELECT_ID, 
	String^ FROM, 
	String^ WHERE);
/*���������� ������ �� ������ ������� ���������� �� �������*/
OleDbDataReader^ SelectRow(
	OleDbConnection^ dbConnection,
	String^ SELECT,
	String^ FROM,
	String^ WHERE = nullptr,
	String^ ORDER_BY = nullptr,
	String^ GROUP_BY = nullptr,
	String^ HAVING = nullptr);
/*���������� true ���� ������ �������� �������*/
bool InsertRow(
	OleDbConnection^ dbConnection,
	String^ TABLE,
	String^ COLUMN,
	String^ VALUES);
/*���������� true ���� ������ �������� �������*/
bool InsertRow(
	OleDbConnection^ dbConnection,
	String^ TABLE,
	Array^  COLUMN,
	Array^ VALUES);
/*���������� true ���� ������ ������� ���������*/
bool UpdateRow(
	OleDbConnection^ dbConnection,
	String^ TABLE,
	String^ SET,
	String^ WHERE);
/*���������� true ���� ������ ������� �������*/
bool DeleteRow(
	OleDbConnection^ dbConnection,
	String^ FROM,
	String^ WHERE);

