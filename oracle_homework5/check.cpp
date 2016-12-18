// check.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "check.h"
#include "afxdialogex.h"


// check 对话框

IMPLEMENT_DYNAMIC(check, CDialogEx)

check::check(CWnd* pParent /*=NULL*/)
	: CDialogEx(check::IDD, pParent)
{

}

check::~check()
{
}

void check::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(check, CDialogEx)
	ON_BN_CLICKED(IDOK, &check::OnBnClickedOk)
END_MESSAGE_MAP()


// check 消息处理程序


void check::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
