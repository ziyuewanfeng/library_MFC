
// oracle_homework5Dlg.h : 头文件
//

#pragma once
#include "afxcmn.h"


// Coracle_homework5Dlg 对话框
class Coracle_homework5Dlg : public CDialogEx
{
// 构造
public:
	Coracle_homework5Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_ORACLE_HOMEWORK5_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

	void system_admin();//系统管理员 1
	void system_book();//教材管理员  2
	void system_bookshop();//出版社管理员  3
	void system_buy();//教材征订管理员 4
	void teacher();//教师  5

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list;
	CTreeCtrl m_tree;
	afx_msg void OnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult);//系统管理员界面的树形控件的选择
};
