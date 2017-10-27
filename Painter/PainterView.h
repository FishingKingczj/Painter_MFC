
// PainterView.h : CPainterView ��Ľӿ�
//

#pragma once


class CPainterView : public CView
{
protected: // �������л�����
	CPainterView();
	DECLARE_DYNCREATE(CPainterView)

// ����
public:
	CPainterDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CPainterView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // PainterView.cpp �еĵ��԰汾
inline CPainterDoc* CPainterView::GetDocument() const
   { return reinterpret_cast<CPainterDoc*>(m_pDocument); }
#endif
