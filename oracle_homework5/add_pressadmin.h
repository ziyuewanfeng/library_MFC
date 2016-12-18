#pragma once


// add_pressadmin 对话框

class add_pressadmin : public CDialogEx
{
	DECLARE_DYNAMIC(add_pressadmin)

public:
	add_pressadmin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~add_pressadmin();

// 对话框数据
	enum { IDD = IDD_add_pressadmin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString pressadmin_turename;
	CString pressadmin_name;
	CString pressadmin_pwd;
	CString pressadmin_phone;
	bool isbnok = false;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedOk();
};
