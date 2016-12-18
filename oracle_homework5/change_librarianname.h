#pragma once


// change_librarianname 对话框

class change_librarianname : public CDialogEx
{
	DECLARE_DYNAMIC(change_librarianname)

public:
	change_librarianname(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_librarianname();

// 对话框数据
	enum { IDD = IDD_change_librarianname };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
