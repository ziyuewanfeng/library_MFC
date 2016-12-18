#pragma once
#include "afxcmn.h"


// teacher 对话框

class teacher : public CDialogEx
{
	DECLARE_DYNAMIC(teacher)

public:
	teacher(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~teacher();

// 对话框数据
	enum { IDD = IDD_teacher };

protected:


	HICON m_hIcon;
	virtual BOOL OnInitDialog();



	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSelchangedteacherTree1(NMHDR *pNMHDR, LRESULT *pResult);
	CTreeCtrl m_tree;
	
	CListCtrl m_list;
};
