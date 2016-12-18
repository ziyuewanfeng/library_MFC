#pragma once
#include "afxcmn.h"


// orderadmin 对话框

class orderadmin : public CDialogEx
{
	DECLARE_DYNAMIC(orderadmin)

public:
	orderadmin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~orderadmin();

// 对话框数据
	enum { IDD = IDD_orderadmin };

protected:

	HICON m_hIcon;
	virtual BOOL OnInitDialog();


	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CTreeCtrl m_tree;
	afx_msg void OnSelchangedorderadminTree1(NMHDR *pNMHDR, LRESULT *pResult);
	CListCtrl m_list;
	afx_msg void OnRclickList1(NMHDR *pNMHDR, LRESULT *pResult);
};
