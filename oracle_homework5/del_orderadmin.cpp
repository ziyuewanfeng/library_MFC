// del_orderadmin.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_orderadmin.h"
#include "afxdialogex.h"


// del_orderadmin 对话框

IMPLEMENT_DYNAMIC(del_orderadmin, CDialogEx)

del_orderadmin::del_orderadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_orderadmin::IDD, pParent)
	, infor_1(_T(""))
{

}

del_orderadmin::~del_orderadmin()
{
}

void del_orderadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(del_orderadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &del_orderadmin::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &del_orderadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// del_orderadmin 消息处理程序


void del_orderadmin::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);

	// TODO:  在此添加控件通知处理程序代码
}


void del_orderadmin::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
