#ifndef APPSTATE_H
#define APPSTATE_H
#include <QColor>
#include"QPoint"
#include<QAbstractGraphicsShapeItem>

namespace  app{

/**
 * @author Mohamed
 * @date 04.12.2018
 * @version 0.2
* @brief This Class Stores the state of the application, for Examble
*  the current tool and it Use default values for all member variables
 */

class AppState: public  QObject
{
    Q_OBJECT
  //  Q_PROPERTY(Tool selectedTool MEMBER m_selectedTool NOTIFY selectedToolChanged)
  //  Q_PROPERTY(qreal selectedWidth MEMBER m_selectedWidth NOTIFY selectedWidthChanged)
  //  Q_PROPERTY(qreal selectedHeight MEMBER m_selectedHeight NOTIFY selectedHeightChanged)
public:
    ///Tool Enum, Possible shapes
    enum Tool{
        /// Rectangle shape
        RECTANGLE,
        /// Circle shape
        CIRCLE,
        /// Square
        SQUARE,



    };

private:
    Tool m_selectedTool;             ///< Tool of shape
    QColor m_selectedColor ;           ///< color of shape
    qreal m_selectedHeight=55;         ///< height of shape
    qreal m_selectedWidth=55;         ///< width of shape
    QPoint  m_selectedPosition;  ///< position of shape
    QAbstractGraphicsShapeItem* m_selectedShape; ///< shape

public slots:
    /**
     * Simple setter for selectedTool
     */
    void setSelectedTool(Tool selecctedTool);
    /**
     * Simple setter for selectedColor
     */
    void setSelectedColor(QColor selectedColor){
        m_selectedColor=selectedColor;
    }
    /**
     * Simple setter for selectedHeight
     */
    void setSelectedHeigth(qreal selectedHeight);
    /**
     * Simple setter for selectedWidth
     */
    void setSelectedWidth(qreal selectedWidth);
    /**
     * Simple setter for selectedPosition
     */
    void setSelectedPosition(QPoint selectedPosition ){
        m_selectedPosition=selectedPosition;
    }
    /**
     * Simple setter for selectedShape
     */
    void setSelectedShape(QAbstractGraphicsShapeItem* selectedShape ){
        m_selectedShape=selectedShape;
    }

public:
    AppState();
    /**
     * Simple getter
     * @return m_selectedTool
     */
    Tool selectedTool(){
        return this-> m_selectedTool;
    }
    /**
     * Simple getter.
     * @return m_selectedColor
     */
    QColor selectedColor(){
        return  m_selectedColor;
    }
    /**
     * Simple getter.
     * @return m_selectedHeight
     */
    qreal selectedHeight(){
        return  m_selectedHeight;
    }
    /**
     * Simple getter.
     * @return m_selectedWidth
     */
    qreal selectedWidth(){
        return m_selectedWidth;
    }
    /**
     * Simple getter.
     * @return m_selectedPosition
     */
    QPoint selectedPosition(){
        return  m_selectedPosition;
    }
    /**
     * Simple getter.
     * @return m_selectedShape
     */
    QAbstractGraphicsShapeItem *selectedShape(){
        return m_selectedShape;
    }
signals:
    void selectedToolChanged(Tool);
    void selectedWidthChanged(qreal);
    void selectedHeightChanged(qreal);

};
}
#endif // APPSTATE_H
