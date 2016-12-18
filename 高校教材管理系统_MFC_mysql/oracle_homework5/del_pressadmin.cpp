// del_pressadmin.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_pressadmin.h"
#include "afxdialogex.h"


// del_pressadmin 对话框

IMPLEMENT_DYNAMIC(del_pressadmin, CDialogEx)

del_pressadmin::del_pressadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_pressadmin::IDD, pParent)
	, pressname(_T(""))
{

}

del_pressadmin::~del_pressadmin()
{
}

void del_pressadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, pressname);
}


BEGIN_MESSAGE_MAP(del_pressadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &del_pressadmin::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &del_pressadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// del_pressadmin 消息处理程序


void del_pressadmin::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, pressname);
	// TODO:  在此添加控件通知处理程序代码
}


void del_pressadmin::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
