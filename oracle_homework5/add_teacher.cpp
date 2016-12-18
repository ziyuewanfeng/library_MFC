// add_teacher.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "add_teacher.h"
#include "afxdialogex.h"


// add_teacher 对话框

IMPLEMENT_DYNAMIC(add_teacher, CDialogEx)

add_teacher::add_teacher(CWnd* pParent /*=NULL*/)
	: CDialogEx(add_teacher::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
{

}

add_teacher::~add_teacher()
{
}

void add_teacher::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT4, infor_2);
	DDX_Text(pDX, IDC_EDIT2, infor_3);
	DDX_Text(pDX, IDC_EDIT3, infor_4);
}


BEGIN_MESSAGE_MAP(add_teacher, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &add_teacher::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT4, &add_teacher::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT2, &add_teacher::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &add_teacher::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &add_teacher::OnBnClickedOk)
END_MESSAGE_MAP()


// add_teacher 消息处理程序


void add_teacher::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void add_teacher::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT4, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void add_teacher::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void add_teacher::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void add_teacher::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
