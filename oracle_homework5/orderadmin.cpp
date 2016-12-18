// orderadmin.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "orderadmin.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"
#include <string>
using namespace std;

// orderadmin 对话框

IMPLEMENT_DYNAMIC(orderadmin, CDialogEx)

orderadmin::orderadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(orderadmin::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

orderadmin::~orderadmin()
{
}

void orderadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE1, m_tree);
	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(orderadmin, CDialogEx)
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &orderadmin::OnSelchangedorderadminTree1)
	ON_NOTIFY(NM_RCLICK, IDC_LIST1, &orderadmin::OnRclickList1)
END_MESSAGE_MAP()


// orderadmin 消息处理程序
BOOL orderadmin::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标






	HTREEITEM hRoot = m_tree.InsertItem(_T("功能列表"), 0, 0);
	m_tree.SetItemState(hRoot, TVIS_BOLD, TVIS_BOLD);
	HTREEITEM hSrc_1 = m_tree.InsertItem(_T("教材订单管理"), 0, 0, hRoot);


	m_tree.InsertItem(_T("增加教材订单"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("删除教材订单"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("修改教材订单"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("查看教材订单"), 3, 3, hSrc_1);


	HTREEITEM hSrc_2 = m_tree.InsertItem(_T("审批教材订单"), 0, 0, hRoot);

	m_tree.InsertItem(_T("已审批"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("未审批"), 3, 3, hSrc_2);



	HTREEITEM hSrc_3 = m_tree.InsertItem(_T("查看教材"), 0, 0, hRoot);

	m_tree.InsertItem(_T("查看教材"), 3, 3, hSrc_3);


	HTREEITEM hSrc_4 = m_tree.InsertItem(_T("修改信息"), 0, 0, hRoot);


	m_tree.InsertItem(_T("修改密码"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("修改用户名"), 3, 3, hSrc_4);
	return true;
}

void orderadmin::OnSelchangedorderadminTree1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO:  在此添加控件通知处理程序代码
	*pResult = 0;

	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//连接数据库
	{
		AfxMessageBox(_T("not to connect mysql"));
		return;
	}

	USES_CONVERSION;

	HTREEITEM selItem;
	selItem = m_tree.GetSelectedItem();
	CString str;
	str = m_tree.GetItemText(selItem);
	
	if (judge == 4)//为教材征订管理员
	{
		if (str == "增加教材订单")
		{
			add_order run;
			run.DoModal();
			str = "";

			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4,4));
			str += "insert into book_order values (";
			str += "1,'";
			str += run.infor_1;
			str += "','";
			str += run.infor_2;
			str += "','";
			str += run.infor_3;
			str += "','";
			str += run.infor_4;
			str += "','";
			str += run.infor_5;
			str += "',";
			str += run.infor_6;
			str += ",";
			str += run.infor_7;
			str += ",0,'";
			str += run.infor_8;
			str += "')";
			string s_copy = T2A(str);//cstring 转string
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());



			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "删除教材订单")
		{

			del_order run;
			run.DoModal();
			str = "";
			CString str1;
			str += "delete from book_order where id=";
			str += run.infor_1;
			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());

			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		if (str == "修改教材订单")
		{

			change_order run;
			run.DoModal();
			str = "";
			/*
			CString str1;
			str += "delete   from book_order where id=";
			str += run.infor_1;

			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4, 5));
			str1 += "insert into book_order values (";
			str1 += "1,'";
			str1 += run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1 += run.infor_5;
			str1 += "','";
			str1 += run.infor_6;
			str1 += "',";
			str1 += run.infor_7;
			str1 += ",";
			str1 += run.infor_8;
			str1 += ",0,'";
			str1 += run.infor_9;
			str1 += "')";
			
			string s_copy = T2A(str);
			string s1_copy = T2A(str1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				mysql_query(&mysql, s1_copy.c_str());
			}
			*/
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "查看教材订单")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();
			str = "";

			CRect rect;
			// 获取编程语言列表视图控件的位置和大小    
			m_list.GetClientRect(&rect);

			// 为列表视图控件添加全行选中和栅格风格    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from book_order ");          //执行SQL语句
			//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			int filedcount = mysql_num_fields(result);//获取字段数
			MYSQL_ROW row = NULL;//记录
			MYSQL_FIELD * filed = NULL;//字段
			int row_judge = 0;
			while (row = mysql_fetch_row(result))
			{
				if (row_judge == 0)
				{
					for (int i = 0; i < filedcount; i++)
					{
						filed = mysql_fetch_field_direct(result, i);
						CString str_1, str_2;
						str_1 = filed->name;
						str_2 = row[i];
						m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
						//m_list.InsertItem(i, str_2);
					}
				}

				for (int i = 0, j = 0; j < filedcount; i++, j++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					if (j == 0)
						m_list.InsertItem(row_judge, str_2);
					else
						m_list.SetItemText(row_judge, j, str_2);

				}
				row_judge++;
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "已审批")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();
			str = "";

			CRect rect;
			// 获取编程语言列表视图控件的位置和大小    
			m_list.GetClientRect(&rect);

			// 为列表视图控件添加全行选中和栅格风格    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from book_order where book_order_check=1");          //执行SQL语句
			//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			int filedcount = mysql_num_fields(result);//获取字段数
			MYSQL_ROW row = NULL;//记录
			MYSQL_FIELD * filed = NULL;//字段
			int row_judge = 0;
			while (row = mysql_fetch_row(result))
			{
				if (row_judge == 0)
				{
					for (int i = 0; i < filedcount; i++)
					{
						filed = mysql_fetch_field_direct(result, i);
						CString str_1, str_2;
						str_1 = filed->name;
						str_2 = row[i];
						m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
						//m_list.InsertItem(i, str_2);
					}
				}

				for (int i = 0, j = 0; j < filedcount; i++, j++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					if (j == 0)
						m_list.InsertItem(row_judge, str_2);
					else
						m_list.SetItemText(row_judge, j, str_2);

				}
				row_judge++;
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}

		if (str == "未审批")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();
			str = "";

			CRect rect;
			// 获取编程语言列表视图控件的位置和大小    
			m_list.GetClientRect(&rect);

			// 为列表视图控件添加全行选中和栅格风格    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from book_order where book_order_check=0");          //执行SQL语句
			//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			int filedcount = mysql_num_fields(result);//获取字段数
			MYSQL_ROW row = NULL;//记录
			MYSQL_FIELD * filed = NULL;//字段
			int row_judge = 0;
			while (row = mysql_fetch_row(result))
			{
				if (row_judge == 0)
				{
					for (int i = 0; i < filedcount; i++)
					{
						filed = mysql_fetch_field_direct(result, i);
						CString str_1, str_2;
						str_1 = filed->name;
						str_2 = row[i];
						m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
						//m_list.InsertItem(i, str_2);
					}
				}

				for (int i = 0, j = 0; j < filedcount; i++, j++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					if (j == 0)
						m_list.InsertItem(row_judge, str_2);
					else
						m_list.SetItemText(row_judge, j, str_2);

				}
				row_judge++;
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "修改密码")
		{

			change_orderadminpassword run;
			run.DoModal();
			str = "";

			CString str;
			//str.Format(_T("update user set userpassword='%s' where username='%s' and userpassword='%s'"),
				//run.infor_1, str_start_name, str_start_pwd);
			str += "update user set userpassword = '";
			str += run.infor_1;
			str += "' where username='";
			str += str_start_name;
			str += "' and userpassword='";
			str += str_start_pwd;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				AfxMessageBox(_T("修改成功"));
				string s_1;
				s_1 = T2A(run.infor_1);
				strcpy_s(str_start_pwd, s_1.size() + 1, s_1.c_str());

			}


			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "修改用户名")
		{

			change_orderadminname run;
			run.DoModal();
			str = "";

			CString str;
			//str.Format(_T("update user set username='%s' where username='%s' and userpassword='%s'"), 
			//	run.infor_1, str_start_name, str_start_pwd);
			str += "update user set username = '";
			str += run.infor_1;
			str += "' where username='";
			str += str_start_name;
			str += "' and userpassword='";
			str += str_start_pwd;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				AfxMessageBox(_T("修改成功"));
				string s_1;
				s_1 = T2A(run.infor_1);
				strcpy_s(str_start_name, s_1.size() + 1, s_1.c_str());

			}


			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
	}
	if (str == "查看教材")
	{
		int nCols = m_list.GetHeaderCtrl()->GetItemCount();
		for (int j = 0; j < nCols; j++)
		{
			m_list.DeleteColumn(0);
		}
		m_list.DeleteAllItems();//删除表数据



		str = "";

		CRect rect;
		// 获取编程语言列表视图控件的位置和大小    
		m_list.GetClientRect(&rect);

		// 为列表视图控件添加全行选中和栅格风格    
		m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		mysql_query(&mysql, "select * from book");          //执行SQL语句
		//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
		MYSQL_RES *result = mysql_store_result(&mysql);
		int filedcount = mysql_num_fields(result);//获取字段数
		MYSQL_ROW row = NULL;//记录
		MYSQL_FIELD * filed = NULL;//字段
		int row_judge = 0;

		while (row = mysql_fetch_row(result))
		{
			if (row_judge == 0)
			{
				for (int i = 0; i < filedcount; i++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					//m_list.InsertItem(i, str_2);
				}
			}

			for (int i = 0, j = 0; j < filedcount; i++, j++)
			{
				filed = mysql_fetch_field_direct(result, i);
				CString str_1, str_2;
				str_1 = filed->name;
				str_2 = row[i];
				//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
				if (j == 0)
					m_list.InsertItem(row_judge, str_2);
				else
					m_list.SetItemText(row_judge, j, str_2);

			}
			row_judge++;
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}
}


void orderadmin::OnRclickList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO:  在此添加控件通知处理程序代码
	*pResult = 0;
	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//连接数据库
	{
		AfxMessageBox(_T("not to connect mysql"));
		return;
	}
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if (pNMListView->iItem != -1)
	{
		int i = pNMListView->iItem;
		if (m_list.GetItemText(i, 8) == "1" || m_list.GetItemText(i, 4) == "1")
		{
			return;
		}
		check run;
		run.DoModal();
		//MessageBox(m_list.GetItemText(i, 0));
		//MessageBox(m_list.GetItemText(i, 4));

		USES_CONVERSION;

		CString str;
		str = "";
		//str.Format(_T("update book_order set book_order_check=1 where id=%d"),m_list.GetItemText(i,0));
		str += "update book_order set book_order_check=1 where id=";
		str += m_list.GetItemText(i, 0);
		string s_copy = T2A(str);
		if (run.isbnok)
		{
			mysql_query(&mysql, s_copy.c_str());
		}
		/*
		int i = pNMListView->iItem;
		int j = pNMListView->iSubItem;
		CString str;
		str.Format(_T("%d,%d"), i, j);
		MessageBox(str);
		MessageBox(m_list.GetItemText(i, j));
		*/
	}

}
