// add_book.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "add_book.h"
#include "afxdialogex.h"


// add_book 对话框

IMPLEMENT_DYNAMIC(add_book, CDialogEx)

add_book::add_book(CWnd* pParent /*=NULL*/)
	: CDialogEx(add_book::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
	, infor_6(_T(""))
	, infor_7(_T(""))
{

}

add_book::~add_book()
{
}

void add_book::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
	DDX_Text(pDX, IDC_EDIT6, infor_4);
	DDX_Text(pDX, IDC_EDIT7, infor_5);
	DDX_Text(pDX, IDC_EDIT8, infor_6);
	DDX_Text(pDX, IDC_EDIT9, infor_7);
	//DDX_Control(pDX, IDC_STATIC_text1, c_static);
}


BEGIN_MESSAGE_MAP(add_book, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_EN_CHANGE(IDC_EDIT1, &add_book::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &add_book::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &add_book::OnEnChangeEdit3)
	ON_BN_CLICKED(IDOK, &add_book::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT6, &add_book::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &add_book::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, &add_book::OnEnChangeEdit8)
	ON_EN_CHANGE(IDC_EDIT9, &add_book::OnEnChangeEdit9)
END_MESSAGE_MAP()


// add_book 消息处理程序


HBRUSH add_book::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性

	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	if (pWnd->GetDlgCtrlID() == IDC_STATIC)
	{
		pDC->SetTextColor(RGB(0, 0, 0));
	}
	return hbr;
}


void add_book::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void add_book::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void add_book::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void add_book::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}


void add_book::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT6, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void add_book::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT7, infor_5);
	// TODO:  在此添加控件通知处理程序代码
}


void add_book::OnEnChangeEdit8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT8, infor_6);
	// TODO:  在此添加控件通知处理程序代码
}


void add_book::OnEnChangeEdit9()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT9, infor_7);
	// TODO:  在此添加控件通知处理程序代码
}


BOOL add_book::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	/*CFont m_font;
	m_font.CreatePointFont(200, _T("宋体"),NULL);
	GetDlgItem(IDC_STATIC)->SetFont(&m_font);
	GetDlgItem(IDC_STATIC)->SetFont(&m_font);*/

	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}
