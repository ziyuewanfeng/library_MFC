// change_presspassword.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_presspassword.h"
#include "afxdialogex.h"


// change_presspassword 对话框

IMPLEMENT_DYNAMIC(change_presspassword, CDialogEx)

change_presspassword::change_presspassword(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_presspassword::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
{

}

change_presspassword::~change_presspassword()
{
}

void change_presspassword::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, infor_1);
	DDX_Text(pDX, IDC_EDIT3, infor_2);
}


BEGIN_MESSAGE_MAP(change_presspassword, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &change_presspassword::OnEnChangeEdit2)
	ON_BN_CLICKED(IDOK, &change_presspassword::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT3, &change_presspassword::OnEnChangeEdit3)
END_MESSAGE_MAP()


// change_presspassword 消息处理程序


void change_presspassword::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_presspassword::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	
	
	if (infor_1 == infor_2)
	{
		//AfxMessageBox(_T("密码相同修改成功！"));
		this->isbnok = 1;
		CDialogEx::OnOK();

	}
	else
	{
		AfxMessageBox(_T("密码不一致修改失败！"));
		CDialogEx::OnCancel();
	}
}


void change_presspassword::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}
