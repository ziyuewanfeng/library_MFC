// change_teachername.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_teachername.h"
#include "afxdialogex.h"


// change_teachername 对话框

IMPLEMENT_DYNAMIC(change_teachername, CDialogEx)

change_teachername::change_teachername(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_teachername::IDD, pParent)
	, infor_1(_T(""))
{

}

change_teachername::~change_teachername()
{
}

void change_teachername::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_teachername, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_teachername::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_teachername::OnBnClickedOk)
END_MESSAGE_MAP()


// change_teachername 消息处理程序


void change_teachername::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_teachername::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
