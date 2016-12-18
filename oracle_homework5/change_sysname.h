#pragma once


// change_sysname 对话框

class change_sysname : public CDialogEx
{
	DECLARE_DYNAMIC(change_sysname)

public:
	change_sysname(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_sysname();

// 对话框数据
	enum { IDD = IDD_change_sysname };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
