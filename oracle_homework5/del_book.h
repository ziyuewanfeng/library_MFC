#pragma once


// del_book 对话框

class del_book : public CDialogEx
{
	DECLARE_DYNAMIC(del_book)

public:
	del_book(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~del_book();

// 对话框数据
	enum { IDD = IDD_del_book };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	afx_msg void OnEnChangeEdit1();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
};
