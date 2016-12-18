// AddBookShop.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "AddBookShop.h"
#include "afxdialogex.h"


// AddBookShop 对话框

IMPLEMENT_DYNAMIC(AddBookShop, CDialogEx)

AddBookShop::AddBookShop(CWnd* pParent /*=NULL*/)
	: CDialogEx(AddBookShop::IDD, pParent)
{

}

AddBookShop::~AddBookShop()
{
}

void AddBookShop::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AddBookShop, CDialogEx)
END_MESSAGE_MAP()


// AddBookShop 消息处理程序
