// add_pressadmin.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "add_pressadmin.h"
#include "afxdialogex.h"


// add_pressadmin 对话框

IMPLEMENT_DYNAMIC(add_pressadmin, CDialogEx)

add_pressadmin::add_pressadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(add_pressadmin::IDD, pParent)
	, pressadmin_turename(_T(""))
	, pressadmin_name(_T(""))
	, pressadmin_pwd(_T(""))
	, pressadmin_phone(_T(""))
{

}

add_pressadmin::~add_pressadmin()
{
}

void add_pressadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, pressadmin_turename);
	DDX_Text(pDX, IDC_EDIT3, pressadmin_name);
	DDX_Text(pDX, IDC_EDIT2, pressadmin_pwd);
	DDX_Text(pDX, IDC_EDIT5, pressadmin_phone);
}


BEGIN_MESSAGE_MAP(add_pressadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &add_pressadmin::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, &add_pressadmin::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT2, &add_pressadmin::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT5, &add_pressadmin::OnEnChangeEdit5)
	ON_BN_CLICKED(IDOK, &add_pressadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// add_pressadmin 消息处理程序


void add_pressadmin::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT1, pressadmin_turename);
}


void add_pressadmin::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT3, pressadmin_turename);
}


void add_pressadmin::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, pressadmin_turename);
	// TODO:  在此添加控件通知处理程序代码
}


void add_pressadmin::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT5, pressadmin_turename);
	// TODO:  在此添加控件通知处理程序代码
}


void add_pressadmin::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = true;
	CDialogEx::OnOK();
}
