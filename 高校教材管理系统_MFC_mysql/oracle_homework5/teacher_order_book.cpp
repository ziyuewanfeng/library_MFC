// teacher_order_book.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "teacher_order_book.h"
#include "afxdialogex.h"


// teacher_order_book 对话框

IMPLEMENT_DYNAMIC(teacher_order_book, CDialogEx)

teacher_order_book::teacher_order_book(CWnd* pParent /*=NULL*/)
	: CDialogEx(teacher_order_book::IDD, pParent)
	, infor_7(_T(""))
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
	, infor_6(_T(""))
{

}

teacher_order_book::~teacher_order_book()
{
}

void teacher_order_book::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT9, infor_7);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
	DDX_Text(pDX, IDC_EDIT6, infor_4);
	DDX_Text(pDX, IDC_EDIT7, infor_5);
	DDX_Text(pDX, IDC_EDIT10, infor_6);
}


BEGIN_MESSAGE_MAP(teacher_order_book, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT9, &teacher_order_book::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT1, &teacher_order_book::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &teacher_order_book::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &teacher_order_book::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT6, &teacher_order_book::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &teacher_order_book::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT10, &teacher_order_book::OnEnChangeEdit10)
	ON_BN_CLICKED(IDOK, &teacher_order_book::OnBnClickedOk)
END_MESSAGE_MAP()


// teacher_order_book 消息处理程序


void teacher_order_book::OnEnChangeEdit9()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT9, infor_7);
	// TODO:  在此添加控件通知处理程序代码
}


void teacher_order_book::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void teacher_order_book::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void teacher_order_book::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void teacher_order_book::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT6, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void teacher_order_book::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT7, infor_5);
	// TODO:  在此添加控件通知处理程序代码
}


void teacher_order_book::OnEnChangeEdit10()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT10, infor_6);
	// TODO:  在此添加控件通知处理程序代码
}


void teacher_order_book::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
