#include "appstate.h"
#include <QDebug>


namespace app {


AppState::AppState()
{

}
void AppState::setSelectedTool(Tool selecctedTool){
    if(selecctedTool!=m_selectedTool){
        m_selectedTool=selecctedTool;
        emit selectedToolChanged(selecctedTool);

    }
}
void AppState::setSelectedWidth(qreal width){
    if(width!=m_selectedWidth){
        m_selectedWidth=width;
        emit selectedWidthChanged(width);
    }
}
void AppState::setSelectedHeigth(qreal height){
    if(height!=m_selectedHeight){
        m_selectedHeight=height;
        emit selectedHeightChanged(height);
    }
}
}
