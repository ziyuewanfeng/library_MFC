#pragma once
#include "afxcmn.h"


// pressadmin 对话框

class pressadmin : public CDialogEx
{
	DECLARE_DYNAMIC(pressadmin)

public:
	pressadmin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~pressadmin();

// 对话框数据
	enum { IDD = IDD_pressadmin };

protected:
	HICON m_hIcon;
	virtual BOOL OnInitDialog();

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult);
	CTreeCtrl m_tree;
	CListCtrl m_list;
};
