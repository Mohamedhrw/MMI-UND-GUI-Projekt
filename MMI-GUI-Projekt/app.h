#ifndef APP_H
#define APP_H
#include"appstate.h"


namespace app {

/**
 * @author Mohamed
 * @date 04.12.2018
 * @version 0.1
 * @brief The App class
 * it is a basic Point for drawing Programm
    */
class App
{
private:
    QGraphicsScene*   m_scene;   ///< scene of opject
    AppState* m_appState;   ///< scene of object
public:
     App();
    ~App();

    /**
     * simple gitter
     * @brief scene
     * @return m_scene
     */
     QGraphicsScene*  scene(){
        return m_scene;
    }
    /**
     * Simple sitter
     * @brief setScene
     * @param scene
     */
    void setScene( Scene*  scene){
        m_scene=scene;
    }
    /**
     * Simple getter
     * @brief getAppState
     * @return m_appState
     */
    AppState* appState(){
        return m_appState;
    }
    /**
     * Simple sitter
     * @brief setAppState
     * @param appstate
     */
    void setAppState(AppState* appstate){
        m_appState=appstate;
    }
slots
    /**
     * @brief onnCanvasClicked
     * This Function is responsble to reacte on a User Event
     * so he checke out what the User have clicked and draw a Shape in the Container
     * a Clicked Shape can be a Circle or Rectangle or Square
*/
    void onnCanvasClicked();

};
}
#endif // APP_H
