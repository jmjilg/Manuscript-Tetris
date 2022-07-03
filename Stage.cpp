#include "Stage.h"
#include "Core.h"

CStage::CStage()    :
    m_iSpeed(2)
{
}

CStage::~CStage()
{
}

bool CStage::Init()
{
    memset(m_Stage, 0, STAGE_WIDTH * STAGE_HEIGHT);

    return true;
}

void CStage::Render()
{
    for (int i = 0; i < STAGE_HEIGHT + 1; ++i)
    {
        for (int j = 0; j < STAGE_WIDTH + 2; ++j)
        {
            if (i == 0 && (j == 0 || j == STAGE_WIDTH +1))
                cout << "бс";

            else if (j == 0)
                cout << "бс";

            else if (i == STAGE_HEIGHT )
                cout << "бс";

            else if (j == STAGE_WIDTH + 1)
                cout << "бс";

            else
                cout << "  ";
        }

        cout << endl;
    }

    for (int i = 0; i < 7; ++i)
    {
        CCore::GetInst()->SetConsolePos(17, i);
        cout << "бс";
    }

    for (int i = 0; i < 6; ++i)
    {
        CCore::GetInst()->SetConsolePos(11 + i, 6);
        cout << "бс";
    }


}

