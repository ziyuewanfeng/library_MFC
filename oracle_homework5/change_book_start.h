#pragma once


// change_book_start 对话框

class change_book_start : public CDialogEx
{
	DECLARE_DYNAMIC(change_book_start)

public:
	change_book_start(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_book_start();

// 对话框数据
	enum { IDD = IDD_DIALOG8 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	CString GetInfor();
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnBnClickedOk();
};
