#pragma once


// change_pressname 对话框

class change_pressname : public CDialogEx
{
	DECLARE_DYNAMIC(change_pressname)

public:
	change_pressname(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_pressname();

// 对话框数据
	enum { IDD = IDD_change_pressname };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
