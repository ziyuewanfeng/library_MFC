// del_order.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_order.h"
#include "afxdialogex.h"


// del_order 对话框

IMPLEMENT_DYNAMIC(del_order, CDialogEx)

del_order::del_order(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_order::IDD, pParent)
	, infor_1(_T(""))
{

}

del_order::~del_order()
{
}

void del_order::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(del_order, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &del_order::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &del_order::OnBnClickedOk)
END_MESSAGE_MAP()


// del_order 消息处理程序


void del_order::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void del_order::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
