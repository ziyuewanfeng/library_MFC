#pragma once


// change_orderadminpassword 对话框

class change_orderadminpassword : public CDialogEx
{
	DECLARE_DYNAMIC(change_orderadminpassword)

public:
	change_orderadminpassword(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_orderadminpassword();

// 对话框数据
	enum { IDD = IDD_change_orderadminpassword };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	afx_msg void OnEnChangeEdit2();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit3();
	CString infor_2;
};
