// add_librarian.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "add_librarian.h"
#include "afxdialogex.h"


// add_librarian 对话框

IMPLEMENT_DYNAMIC(add_librarian, CDialogEx)

add_librarian::add_librarian(CWnd* pParent /*=NULL*/)
	: CDialogEx(add_librarian::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
{

}

add_librarian::~add_librarian()
{
}

void add_librarian::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT4, infor_2);
	DDX_Text(pDX, IDC_EDIT2, infor_3);
	DDX_Text(pDX, IDC_EDIT3, infor_4);
}


BEGIN_MESSAGE_MAP(add_librarian, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &add_librarian::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT4, &add_librarian::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT2, &add_librarian::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &add_librarian::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &add_librarian::OnBnClickedOk)
END_MESSAGE_MAP()


// add_librarian 消息处理程序


void add_librarian::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void add_librarian::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT4, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void add_librarian::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void add_librarian::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void add_librarian::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok=1;
	CDialogEx::OnOK();
}
