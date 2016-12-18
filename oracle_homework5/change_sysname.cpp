// change_sysname.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_sysname.h"
#include "afxdialogex.h"


// change_sysname 对话框

IMPLEMENT_DYNAMIC(change_sysname, CDialogEx)

change_sysname::change_sysname(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_sysname::IDD, pParent)
	, infor_1(_T(""))
{

}

change_sysname::~change_sysname()
{
}

void change_sysname::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_sysname, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_sysname::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_sysname::OnBnClickedOk)
END_MESSAGE_MAP()


// change_sysname 消息处理程序


void change_sysname::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_sysname::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
