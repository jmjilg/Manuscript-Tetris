#include "ShapeZ.h"

CShapeZ::CShapeZ()
{
}

CShapeZ::~CShapeZ()
{
}

bool CShapeZ::Init()
{
    if (!CShape::Init())
        return false;

    m_cShape[3][1] = '0';
    m_cShape[3][2] = '0';
    m_cShape[2][0] = '0';
    m_cShape[2][1] = '0';

    m_iWidthCount = 3;
    m_tPos.x = 4;
    m_tPos.y = 0;

    m_iDir = RD_LEFT;

    return true;
}

void CShapeZ::Rotation()
{
    m_iDir = m_iDir == RD_UP ? RD_LEFT : RD_UP;

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            m_cShape[i][j] = '1';
        }
    }

    switch (m_iDir)
    {
    case RD_UP:
        m_cShape[1][1] = '0';
        m_cShape[2][0] = '0';
        m_cShape[2][1] = '0';
        m_cShape[3][0] = '0';
        m_iWidthCount = 2;
        break;
    case RD_LEFT:
        m_cShape[3][1] = '0';
        m_cShape[3][2] = '0';
        m_cShape[2][0] = '0';
        m_cShape[2][1] = '0';
        m_iWidthCount = 3;
        break;
    }
}
