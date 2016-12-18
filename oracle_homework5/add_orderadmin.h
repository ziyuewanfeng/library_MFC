#pragma once


// add_orderadmin 对话框

class add_orderadmin : public CDialogEx
{
	DECLARE_DYNAMIC(add_orderadmin)

public:
	add_orderadmin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~add_orderadmin();

// 对话框数据
	enum { IDD = IDD_add_orderadmin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	CString infor_2;
	CString infor_3;
	CString infor_4;
	bool isbnok = false;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
};
