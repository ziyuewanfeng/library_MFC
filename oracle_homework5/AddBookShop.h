#pragma once


// AddBookShop 对话框

class AddBookShop : public CDialogEx
{
	DECLARE_DYNAMIC(AddBookShop)

public:
	AddBookShop(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~AddBookShop();

// 对话框数据
	enum { IDD = IDD_addbookshop };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
