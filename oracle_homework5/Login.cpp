// Login.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "Login.h"
#include "afxdialogex.h"
#include "START.h"

// Login 对话框

IMPLEMENT_DYNAMIC(Login, CDialogEx)

Login::Login(CWnd* pParent /*=NULL*/)
	: CDialogEx(Login::IDD, pParent)
{

}

Login::~Login()
{
}

void Login::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Login, CDialogEx)
	ON_BN_CLICKED(IDOK, &Login::OnBnClickedTurn_start)
END_MESSAGE_MAP()


// Login 消息处理程序


void Login::OnBnClickedTurn_start()
{
	// TODO:  在此添加控件通知处理程序代码
	MessageBox(_T("注册成功"));
	CDialog::EndDialog(0);
	START s;
	s.DoModal();
	
	//CDialogEx::OnOK();
	//CDialogEx::OnCancel();
	
}
