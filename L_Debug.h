// #pragma once
// THIS IS MY DEBUGGING LIBRARY, ORIGINALLY FROM ESPAsync_WiFiManager (github.com/khoih-prog/ESPAsync_WiFiManager)



#define ESP_DBG_PORT      Serial


String functionNames[] = {"(WiFi)", "(Web)", "(Config)", "(Main)"};

enum FUNCTION
{
  WIFI = 0,
  WEB = 1,
  CONFIG = 2,
  MAIN = 3
};


// Change L_DEBUG_LOG_LVL to set tracing and logging verbosity
#define LOG_LVL_DISABLED        0   // NO LOGGING AT ALL DEFINETLY NOT A WORD
#define LOG_LVL_ERROR           1   // ERRORS ONLY
#define LOG_LVL_WARN            2   // ERRORS AND WARNINGS
#define LOG_LVL_INFO            3   // ERRORS, WARNINGS AND INFORMATIONAL
#define LOG_LVL_DEBUG           4   // ERRORS, WARNINGS, INFORMATIONAL AND DEBUG

#ifndef L_DEBUG_LOG_LVL
  #define L_DEBUG_LOG_LVL       LOG_LVL_ERROR
#endif

/////////////////////////////////////////////////////////
#define ERROR_MARK   "[ERROR]"
#define WARN_MARK    "[WARN]"
#define INFO_MARK    "[INFO]"
#define DEBUG_MARK   "[DEBUG]"

const char SPC[]   = " ";

#define ESP_PRINT        ESP_DBG_PORT.print
#define ESP_PRINTLN      ESP_DBG_PORT.println

#define PRINT_SP     ESP_PRINT(SPC)  
//PRINTS A SPACE, BUT NOT ELON MUSK'S SPACE, JUST A REGULAR ASCII SPACE

#define MARK_FUNCTION(mark,function) {ESP_PRINT(functionNames[function]);ESP_PRINT(mark);PRINT_SP;} 
//PRINTS THE FUNCTION NAME AND MARK

////////////////////////////  ERROR LEVEL LOGGING ////////////////////////////

/**
 * @brief ERROR LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
*/
#define L_ERROR(F,x)         if(L_DEBUG_LOG_LVL>0) { MARK_FUNCTION(ERROR_MARK,F); ESP_PRINTLN(x); }

/**
 * @brief ERROR LEVEL LOGGING WITHOUT MARK AND FUNCTION PRINTED
 * @param x MESSAGE TO PRINT
*/
#define L_ERROR0(x)          if(L_DEBUG_LOG_LVL>0) { ESP_PRINT(x); }

/**
 * @brief ERROR LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
 * @param y MESSAGE TO PRINT
*/
#define L_ERROR1(F,x,y)      if(L_DEBUG_LOG_LVL>0) { MARK_FUNCTION(ERROR_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINTLN(y); }

/**
 * @brief ERROR LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
 * @param y MESSAGE TO PRINT
 * @param z MESSAGE TO PRINT
*/
#define L_ERROR2(F,x,y,z)    if(L_DEBUG_LOG_LVL>0) { MARK_FUNCTION(ERROR_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINT(y); PRINT_SP;  ESP_PRINTLN(z); }

/**
 * @brief ERROR LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
 * @param y MESSAGE TO PRINT
 * @param z MESSAGE TO PRINT
 * @param w MESSAGE TO PRINT
*/
#define L_ERROR3(F,x,y,z,w)  if(L_DEBUG_LOG_LVL>0) { MARK_FUNCTION(ERROR_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINT(y); PRINT_SP; ESP_PRINT(z); PRINT_SP; ESP_PRINTLN(w); }

////////////////////////////  WARN LEVEL LOGGING ////////////////////////////

/**
 * @brief WARNING LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
*/
#define L_WARN(F,x)          if(L_DEBUG_LOG_LVL>1) { MARK_FUNCTION(WARN_MARK,F); ESP_PRINTLN(x); }

/**
 * @brief WARNING LEVEL LOGGING WITHOUT MARK AND FUNCTION PRINTED
 * @param x MESSAGE TO PRINT
*/
#define L_WARN0(x)           if(L_DEBUG_LOG_LVL>1) { ESP_PRINT(x); }

/**
 * @brief WARNING LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
 * @param y MESSAGE TO PRINT
*/
#define L_WARN1(F,x,y)       if(L_DEBUG_LOG_LVL>1) { MARK_FUNCTION(WARN_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINTLN(y); }

/**
 * @brief WARNING LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
 * @param y MESSAGE TO PRINT
 * @param z MESSAGE TO PRINT
*/
#define L_WARN2(F,x,y,z)     if(L_DEBUG_LOG_LVL>1) { MARK_FUNCTION(WARN_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINT(y); PRINT_SP;  ESP_PRINTLN(z); }

/**
 * @brief WARNING LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
 * @param y MESSAGE TO PRINT
 * @param z MESSAGE TO PRINT
 * @param w MESSAGE TO PRINT
*/
#define L_WARN3(F,x,y,z,w)   if(L_DEBUG_LOG_LVL>1) { MARK_FUNCTION(WARN_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINT(y); PRINT_SP; ESP_PRINT(z); PRINT_SP; ESP_PRINTLN(w); }

////////////////////////////  INFO LEVEL LOGGING ////////////////////////////


/**
 * @brief INFORMATIONAL LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
*/
#define L_INFO(F,x)          if(L_DEBUG_LOG_LVL>2) { MARK_FUNCTION(INFO_MARK,F); ESP_PRINTLN(x); }

/**
 * @brief INFORMATIONAL LEVEL LOGGING WITHOUT MARK AND FUNCTION PRINTED
 * @param x MESSAGE TO PRINT
*/
#define L_INFO0(x)           if(L_DEBUG_LOG_LVL>2) { ESP_PRINT(x); }

/**
 * @brief INFORMATIONAL LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
 * @param y MESSAGE TO PRINT
*/
#define L_INFO1(F,x,y)       if(L_DEBUG_LOG_LVL>2) { MARK_FUNCTION(INFO_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINTLN(y); }

/**
 * @brief INFORMATIONAL LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
 * @param y MESSAGE TO PRINT
 * @param z MESSAGE TO PRINT
*/
#define L_INFO2(F,x,y,z)     if(L_DEBUG_LOG_LVL>2) { MARK_FUNCTION(INFO_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINT(y); PRINT_SP; ESP_PRINTLN(z); }

/**
 * @brief INFORMATIONAL LEVEL LOGGING
 * @param F FUNCTION NAME (ENUM)
 * @param x MESSAGE TO PRINT
 * @param y MESSAGE TO PRINT
 * @param z MESSAGE TO PRINT
 * @param w MESSAGE TO PRINT
*/
#define L_INFO3(F,x,y,z,w)   if(L_DEBUG_LOG_LVL>2) { MARK_FUNCTION(INFO_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINT(y); PRINT_SP; ESP_PRINT(z); PRINT_SP; ESP_PRINTLN(w); }

/////////////////////////////////////////////////////////

////////////////////////////  DEBUG LEVEL LOGGING  ////////////////////////////

/**
 * @brief      DEBUG LEVEL LOGGING
 * @param      F     FUNCTION NAME (enum)
 * @param      x     MESSAGE TO PRINT
*/
#define L_DEBUG(F,x)         if(L_DEBUG_LOG_LVL>3) { MARK_FUNCTION(DEBUG_MARK,F); ESP_PRINTLN(x); }

/**
 * @brief      DEBUG LEVEL LOGGING WITHOUT MARK AND FUNCTION PRINTED
 * @param      x     MESSAGE TO PRINT
*/
#define L_DEBUG0(x)          if(L_DEBUG_LOG_LVL>3) { ESP_PRINT(x); }

/**
 * @brief      DEBUG LEVEL LOGGING WITH TWO MESSAGES
 * @param      F     FUNCTION NAME (enum)
 * @param      x     MESSAGE TO PRINT
 * @param      y     MESSAGE TO PRINT
*/
#define L_DEBUG1(F,x,y)      if(L_DEBUG_LOG_LVL>3) { MARK_FUNCTION(DEBUG_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINTLN(y); }

/**
 * @brief      DEBUG LEVEL LOGGING WITH THREE MESSAGES
 * @param      F     FUNCTION NAME (enum)
 * @param      x     MESSAGE TO PRINT
 * @param      y     MESSAGE TO PRINT
 * @param      z     MESSAGE TO PRINT
*/
#define L_DEBUG2(F,x,y,z)    if(L_DEBUG_LOG_LVL>3) { MARK_FUNCTION(DEBUG_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINT(y); PRINT_SP; ESP_PRINTLN(z); }

/**
 * @brief      DEBUG LEVEL LOGGING WITH FOUR MESSAGES
 * @param      F     FUNCTION NAME (enum)
 * @param      x     MESSAGE TO PRINT
 * @param      y     MESSAGE TO PRINT
 * @param      z     MESSAGE TO PRINT
 * @param      w     MESSAGE TO PRINT
*/
#define L_DEBUG3(F,x,y,z,w)  if(L_DEBUG_LOG_LVL>3) { MARK_FUNCTION(DEBUG_MARK,F); ESP_PRINT(x); PRINT_SP; ESP_PRINT(y); PRINT_SP; ESP_PRINT(z); PRINT_SP; ESP_PRINTLN(w); }

/////////////////////////////////////////////////////////
