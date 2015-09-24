########################################################################################
#############                ���� views ���ļ�                           ############## 
########################################################################################
LIST (APPEND views_LIB_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/LogViews.c 
    ${CMAKE_CURRENT_SOURCE_DIR}/ViewsInterface.c
    )
    


########################################################################################
#############               ����Դ����Ŀ¼                                ############## 
########################################################################################
#add_subdirectory( BMP )
#add_subdirectory( GIF )
#add_subdirectory( JPEG )
#add_subdirectory( PNG )

#MESSAGE("${CMAKE_CURRENT_SOURCE_DIR} status.")



########################################################################################
#############               ���� views ��汾��                          ############## 
########################################################################################
set(views_LIB_VERSION     "1.0.0")
set(views_LIB_SOVERSION   "1")



########################################################################################
#############              ����ͷ�ļ�Ŀ¼                                 ############## 
########################################################################################
include_directories(  
    ${PROJECT_SOURCE_DIR}/includes  
    ${PROJECT_SOURCE_DIR}/Views   
)  


########################################################################################
#############               ���� ���ӿ��ļ�Ŀ¼                           ############## 
########################################################################################
link_directories(  
    /usr/local/lib   
    )  

    
########################################################################################
#############           ����Ŀ����ļ� �� �����汾��                      ############## 
########################################################################################
IF (COMPONENT_views)
    #���ɶ�̬��  ��̬���� STATIC  
    add_library (viewslib     SHARED        ${views_LIB_SRCS})  
    add_library (viewss       STATIC       ${views_LIB_SRCS})  

    # ����������ϵ�������ǰ������ײ�Ĺ����⣬����Ҫ����
    #add_dependencies(viewslib     pthread)
    #add_dependencies(viewss     pthread)
    # ����Ҫ���ӵĹ�����, ���˳����Ǳ�����������ʱ˳��
    #target_link_libraries(viewslib pthread)
    #target_link_libraries(viewss pthread)

    # ���ð汾�ţ�SOVERSIONΪAPI�汾��
    set_target_properties(viewslib  PROPERTIES 
                                    VERSION     ${views_LIB_VERSION}   
                                    SOVERSION   ${views_LIB_SOVERSION} )
ELSE (COMPONENT_views)
    MESSAGE(STATUS "Not Include COMPONENT_views module.")
ENDIF (COMPONENT_views)
