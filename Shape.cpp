#include "Shape.h"
#include "Core.h"

CShape::CShape()
{
	m_iWidthCount = 0;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			m_cShape[i][j] = '1';
		}
	}
}

CShape::~CShape()
{
}

bool CShape::Init()
{
	m_tPivot.x = 0;
	m_tPivot.y = 3;

	return true;
}

void CShape::Render()
{
	for (int i = 0; i < 4; ++i)
	{
		int iYIndex = m_tPos.y - (3 - i);
		if (iYIndex < 0)
			continue;

		// 콘솔창에 출력할 좌표를 설정한 후에 출력한다.
		CCore::GetInst()->SetConsolePos(m_tPos.x, iYIndex);
		for (int j = 0; j < 4; ++j)
		{
			if (m_tPos.x + j >= STAGE_WIDTH)
				continue;

			if (m_cShape[i][j] == '0')
				cout << "■";

			else
				cout << "  ";
		}

		cout << endl;
	}
}

void CShape::RenderNext()
{
	for (int i = 0; i < 4; ++i)
	{
		int iYIndex = m_tPos.y - (3 - i);
		if (iYIndex < 0)
			continue;

		// 콘솔창에 출력할 좌표를 설정한 후에 출력한다.
		CCore::GetInst()->SetConsolePos(m_tPos.x, iYIndex);
		for (int j = 0; j < 4; ++j)
		{
			if (m_cShape[i][j] == '0')
				cout << "■";

			else
				cout << "  ";
		}

		cout << endl;
	}
}

// 이 함수는 true를 리턴할 경우 바닥에 닿았다는 것이고 false일 경우 바닥에 닿지 않았다
bool CShape::MoveDown()
{
	if (m_tPos.y == STAGE_HEIGHT - 1)
		return true;

	++m_tPos.y;

	return false;
}

void CShape::MoveLeft()
{
	if (m_tPos.x == 0)
		return;

	--m_tPos.x;
}

void CShape::MoveRight()
{
	if (m_tPos.x + m_iWidthCount == STAGE_WIDTH)
		return;

	++m_tPos.x;
}
