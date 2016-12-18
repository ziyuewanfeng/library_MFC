#pragma once


// del_order 对话框

class del_order : public CDialogEx
{
	DECLARE_DYNAMIC(del_order)

public:
	del_order(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~del_order();

// 对话框数据
	enum { IDD = IDD_del_order };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
