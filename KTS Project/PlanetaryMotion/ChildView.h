
// ChildView.h : interface of the CChildView class
//

#include <deque>
#include <stdlib.h>
#include <time.h>
#include "graphics/OpenGLWnd.h"
#include "graphics/GrTexture.h"
#include "graphics/GrCamera.h"
#include "Sphere.h"

#pragma once


// CChildView window

class CChildView : public COpenGLWnd
{
// Construction
public:
	CChildView();

// Attributes
public:

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	void OnGLDraw(CDC* pDC);
	afx_msg void OnFileSave32771();
private:
	CGrCamera m_camera;
//	int m_scene;
	CSphere m_mercury;
	CGrTexture m_t_mercury;

	CSphere m_venus;
	CGrTexture m_t_venus;

	CSphere m_earth;
	CGrTexture m_t_earth;

	CSphere m_mars;
	CGrTexture m_t_mars;

	CSphere m_sun;
	CGrTexture m_t_sun;

	UINT_PTR m_spinTimer; ///< for timer counter
	std::deque<double> m_angleSpd; ///< angle list for 4 planets, index from 0 to 3
	std::deque<double> m_initialAng; ///< randomerize the initial angle for each planet
	bool m_orbitRot; ///< rotate around the sun
	

public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnOptionSpin();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

