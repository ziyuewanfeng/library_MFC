// add_order.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "add_order.h"
#include "afxdialogex.h"


// add_order 对话框

IMPLEMENT_DYNAMIC(add_order, CDialogEx)

add_order::add_order(CWnd* pParent /*=NULL*/)
	: CDialogEx(add_order::IDD, pParent)
	
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
	, infor_6(_T(""))
	, infor_7(_T(""))
	, infor_8(_T(""))
{

}

add_order::~add_order()
{
}

void add_order::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
	DDX_Text(pDX, IDC_EDIT6, infor_4);
	DDX_Text(pDX, IDC_EDIT7, infor_5);
	DDX_Text(pDX, IDC_EDIT9, infor_6);
	DDX_Text(pDX, IDC_EDIT10, infor_7);
	DDX_Text(pDX, IDC_EDIT11, infor_8);
}


BEGIN_MESSAGE_MAP(add_order, CDialogEx)
	
	ON_BN_CLICKED(IDOK, &add_order::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT1, &add_order::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &add_order::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &add_order::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT6, &add_order::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &add_order::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT9, &add_order::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT10, &add_order::OnEnChangeEdit10)
	ON_EN_CHANGE(IDC_EDIT11, &add_order::OnEnChangeEdit11)
END_MESSAGE_MAP()


// add_order 消息处理程序





void add_order::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}


void add_order::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void add_order::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void add_order::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void add_order::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT6, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void add_order::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT7, infor_5);
	// TODO:  在此添加控件通知处理程序代码
}


void add_order::OnEnChangeEdit9()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT9, infor_6);
	// TODO:  在此添加控件通知处理程序代码
}


void add_order::OnEnChangeEdit10()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT10, infor_7);
	// TODO:  在此添加控件通知处理程序代码
}


void add_order::OnEnChangeEdit11()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT11, infor_8);
	// TODO:  在此添加控件通知处理程序代码
}
