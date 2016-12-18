#pragma once
#include "afxcmn.h"


// librarian 对话框

class librarian : public CDialogEx
{
	DECLARE_DYNAMIC(librarian)

public:
	librarian(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~librarian();

// 对话框数据
	enum { IDD = IDD_librarian };

protected:

	HICON m_hIcon;
	virtual BOOL OnInitDialog();


	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CTreeCtrl m_tree;
	afx_msg void OnSelchangedllibrarianTree1(NMHDR *pNMHDR, LRESULT *pResult);
	CListCtrl m_list;
	afx_msg void OnRclickList1(NMHDR *pNMHDR, LRESULT *pResult);
};
