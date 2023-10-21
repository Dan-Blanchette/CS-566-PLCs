void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void BIGPROJV1_init__(BIGPROJV1 *data__, BOOL retain) {
  __INIT_VAR(data__->FACTORYIORESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ESTOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STARTBUTTON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS0_BOOL0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS0_BOOL1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS0_BOOL2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS0_BOOL3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DIFF0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC0_OPENED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC1_OPENED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC2_OPENED,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC0_BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC1_BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC2_BUSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC0_HASERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC1_HASERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC2_HASERROR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SELECTOR0_STATE0_OFF,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SELECTOR0_STATE1_ON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RETRO0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RETRO1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RETRO2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RETRO3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RETRO4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DIFFUSE_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DIFFUSE_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DIFFUSE_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS1_BOOL0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS1_BOOL1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS1_BOOL2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS1_BOOL3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS2_BOOL0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS2_BOOL1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS2_BOOL2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIS2_BOOL3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DIFF1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DIFF2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_DETECT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_XMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_ZMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_ROTATING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_DETECT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_XMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_ZMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_ROTATING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_DETECT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_XMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_ZMOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_ROTATING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_GRIPPER_ROTATE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_GRIPPER_ROTATE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_GRIPPER_ROTATE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BACK_LIM_PUSHER0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BACK_LIM_PUSHER1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BACK_LIM_PUSHER2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FRONT_LIM_PUSHER0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FRONT_LIM_PUSHER1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->FRONT_LIM_PUSHER2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RETRO8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RETRO5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DIFFUSE_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_2M_0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_2M_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_2M_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_2M_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_2M_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_2M_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_4M_0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_4M_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_4M_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_4M_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURVED_CONV0_CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURVED_CONV1_CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CURVED_CONV2_CCW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP_MC0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP_MC1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP_MC2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET_MC0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET_MC1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET_MC2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->START_MC0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->START_MC1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->START_MC2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIV_ARM0_TURN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIV_ARM1_TURN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIV_ARM0_BELT_PLUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIV_ARM1_BELT_PLUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIV_ARM0_BELT_MINUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIV_ARM1_BELT_MINUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSHER0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSHER1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSHER2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPUR_CONV0_PLUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPUR_CONV1_PLUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPUR_CONV0_MINUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPUR_CONV1_MINUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_X,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_X,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_X,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_Z,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_Z,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_Z,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_GRAB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_GRAB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_GRAB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_ROT_CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_ROT_CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_ROT_CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_GRIPPER_CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_GRIPPER_CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_GRIPPER_CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_ROT_CCW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_ROT_CCW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_ROT_CCW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP0_GRIPPER_CCW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_GRIPPER_CCW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP2_GRIPPER_CCW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STARTBUTTONLIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_2M_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLUE_LIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GREEN_LIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->YELLOW_LIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOPBLADE0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOPBLADE1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOPBLADE2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONV_2M_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DIGITAL_DISP0,0,retain)
  __INIT_VAR(data__->DIGITAL_DISP1,0,retain)
  __INIT_VAR(data__->DIGITAL_DISP2,0,retain)
  RS_init__(&data__->RS0,retain);
  RS_init__(&data__->RS1,retain);
  __INIT_VAR(data__->PRESETVALUE_99,99,retain)
  __INIT_VAR(data__->FACTORY_RESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PNP1_LINE_RESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MC_MAX_0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RAWGREEN_V0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BADGREEN_V0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RAWMETAL_V0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BADMETAL_V0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RAWBLUE_V0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BADBLUE_V0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BADMETAL_V2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RAWMETAL_V2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RAWBLUE_V1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BADBLUE_V1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GOOD_BLUE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GOOD_GREEN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GOOD_METAL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BAD_BLUE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BAD_GREEN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BAD_METAL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BAD_BLUE_CNT,0,retain)
  __INIT_VAR(data__->GOOD_BLUE_CNT,0,retain)
  RS_init__(&data__->RS2,retain);
  RS_init__(&data__->RS3,retain);
  RS_init__(&data__->RS4,retain);
  RS_init__(&data__->RS6,retain);
  RS_init__(&data__->RS7,retain);
  RS_init__(&data__->RS5,retain);
  RS_init__(&data__->RS8,retain);
  RS_init__(&data__->RS9,retain);
  RS_init__(&data__->RS10,retain);
  RS_init__(&data__->RS11,retain);
  RS_init__(&data__->RS13,retain);
  RS_init__(&data__->RS12,retain);
  RS_init__(&data__->RS14,retain);
  RS_init__(&data__->RS15,retain);
  RS_init__(&data__->RS16,retain);
  __INIT_VAR(data__->L_D,__BOOL_LITERAL(FALSE),retain)
  RS_init__(&data__->RS17,retain);
  RS_init__(&data__->RS18,retain);
  RS_init__(&data__->RS19,retain);
  __INIT_VAR(data__->VARTIME1,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->VARTIME2,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->VARTIME3,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->VARTIME4,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->VARTIME5,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->VARTIME6,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->VARTIME7,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->PNPHASITEM,__BOOL_LITERAL(FALSE),retain)
  RS_init__(&data__->RS25,retain);
  RS_init__(&data__->RS27,retain);
  CTU_init__(&data__->CTU0,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON5,retain);
  RS_init__(&data__->RS26,retain);
  RS_init__(&data__->RS28,retain);
  RS_init__(&data__->RS29,retain);
  RS_init__(&data__->RS38,retain);
  CTU_init__(&data__->CTU1,retain);
  CTU_init__(&data__->CTU2,retain);
  TON_init__(&data__->TON0,retain);
  R_TRIG_init__(&data__->R_TRIG1,retain);
  F_TRIG_init__(&data__->F_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  R_TRIG_init__(&data__->R_TRIG3,retain);
  R_TRIG_init__(&data__->R_TRIG4,retain);
  R_TRIG_init__(&data__->R_TRIG5,retain);
  F_TRIG_init__(&data__->F_TRIG2,retain);
  R_TRIG_init__(&data__->R_TRIG6,retain);
  R_TRIG_init__(&data__->R_TRIG7,retain);
  R_TRIG_init__(&data__->R_TRIG8,retain);
  F_TRIG_init__(&data__->F_TRIG3,retain);
  F_TRIG_init__(&data__->F_TRIG4,retain);
  R_TRIG_init__(&data__->R_TRIG9,retain);
  F_TRIG_init__(&data__->F_TRIG5,retain);
  F_TRIG_init__(&data__->F_TRIG6,retain);
  F_TRIG_init__(&data__->F_TRIG7,retain);
  F_TRIG_init__(&data__->F_TRIG8,retain);
  R_TRIG_init__(&data__->R_TRIG10,retain);
  R_TRIG_init__(&data__->R_TRIG11,retain);
  R_TRIG_init__(&data__->R_TRIG12,retain);
  R_TRIG_init__(&data__->R_TRIG13,retain);
}

// Code part
void BIGPROJV1_body__(BIGPROJV1 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->,FACTORY_RESET,,((!(__GET_VAR(data__->ESTOP,)) || __GET_VAR(data__->R_TRIG1.Q,)) || __GET_VAR(data__->SELECTOR0_STATE0_OFF,)));
  __SET_VAR(data__->F_TRIG1.,CLK,,__GET_VAR(data__->STARTBUTTON,));
  F_TRIG_body__(&data__->F_TRIG1);
  __SET_VAR(data__->RS0.,S,,(__GET_VAR(data__->F_TRIG1.Q,) && __GET_VAR(data__->SELECTOR0_STATE1_ON,)));
  __SET_VAR(data__->RS0.,R1,,__GET_VAR(data__->FACTORY_RESET,));
  RS_body__(&data__->RS0);
  __SET_VAR(data__->RS1.,S,,((__GET_VAR(data__->ESTOP,) && !(__GET_VAR(data__->FACTORYIORESET,))) && __GET_VAR(data__->RS0.Q1,)));
  __SET_VAR(data__->RS1.,R1,,__GET_VAR(data__->FACTORY_RESET,));
  RS_body__(&data__->RS1);
  __SET_VAR(data__->,CONV_2M_0,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CONV_2M_1,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CURVED_CONV0_CW,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CURVED_CONV1_CW,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CURVED_CONV2_CCW,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,SPUR_CONV0_MINUS,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,SPUR_CONV1_MINUS,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CONV_2M_5,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CONV_4M_0,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,PNP1_LINE_RESET,,((((!(__GET_VAR(data__->PNP1_GRAB,)) || !(__GET_VAR(data__->PNP1_X,))) || !(__GET_VAR(data__->PNP1_Z,))) || !(__GET_VAR(data__->PNP1_DETECT,))) || !(__GET_VAR(data__->STOPBLADE0,))));
  __SET_VAR(data__->,CONV_4M_2,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,START_MC0,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CONV_4M_4,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,START_MC1,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,START_MC2,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CONV_2M_7,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,STARTBUTTONLIGHT,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CONV_2M_6,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->,CONV_4M_5,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->RETRO8,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->RS2.,S,,(((!(__GET_VAR(data__->VIS0_BOOL3,)) && __GET_VAR(data__->VIS0_BOOL2,)) && !(__GET_VAR(data__->VIS0_BOOL1,))) && !(__GET_VAR(data__->VIS0_BOOL0,))));
  __SET_VAR(data__->RS2.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->R_TRIG2.Q,)));
  RS_body__(&data__->RS2);
  __SET_VAR(data__->,RAWGREEN_V0,,__GET_VAR(data__->RS2.Q1,));
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->RETRO8,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_VAR(data__->RS5.,S,,(((!(__GET_VAR(data__->VIS0_BOOL3,)) && __GET_VAR(data__->VIS0_BOOL2,)) && __GET_VAR(data__->VIS0_BOOL1,)) && __GET_VAR(data__->VIS0_BOOL0,)));
  __SET_VAR(data__->RS5.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->R_TRIG3.Q,)));
  RS_body__(&data__->RS5);
  __SET_VAR(data__->,RAWMETAL_V0,,__GET_VAR(data__->RS5.Q1,));
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_VAR(data__->RETRO8,));
  R_TRIG_body__(&data__->R_TRIG4);
  __SET_VAR(data__->RS8.,S,,(((!(__GET_VAR(data__->VIS0_BOOL3,)) && !(__GET_VAR(data__->VIS0_BOOL2,))) && !(__GET_VAR(data__->VIS0_BOOL1,))) && __GET_VAR(data__->VIS0_BOOL0,)));
  __SET_VAR(data__->RS8.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->R_TRIG4.Q,)));
  RS_body__(&data__->RS8);
  __SET_VAR(data__->,RAWBLUE_V0,,__GET_VAR(data__->RS8.Q1,));
  __SET_VAR(data__->R_TRIG5.,CLK,,__GET_VAR(data__->RETRO8,));
  R_TRIG_body__(&data__->R_TRIG5);
  __SET_VAR(data__->RS3.,S,,(((!(__GET_VAR(data__->VIS0_BOOL3,)) && __GET_VAR(data__->VIS0_BOOL2,)) && __GET_VAR(data__->VIS0_BOOL1,)) && !(__GET_VAR(data__->VIS0_BOOL0,))));
  __SET_VAR(data__->RS3.,R1,,((__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->R_TRIG5.Q,)) || __GET_VAR(data__->RAWGREEN_V0,)));
  RS_body__(&data__->RS3);
  __SET_VAR(data__->,BADGREEN_V0,,__GET_VAR(data__->RS3.Q1,));
  __SET_VAR(data__->F_TRIG2.,CLK,,__GET_VAR(data__->DIFF0,));
  F_TRIG_body__(&data__->F_TRIG2);
  __SET_VAR(data__->RS4.,S,,(__GET_VAR(data__->F_TRIG2.Q,) && __GET_VAR(data__->BADGREEN_V0,)));
  __SET_VAR(data__->RS4.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->FRONT_LIM_PUSHER2,)));
  RS_body__(&data__->RS4);
  __SET_VAR(data__->,PUSHER2,,__GET_VAR(data__->RS4.Q1,));
  __SET_VAR(data__->R_TRIG6.,CLK,,__GET_VAR(data__->RETRO8,));
  R_TRIG_body__(&data__->R_TRIG6);
  __SET_VAR(data__->RS9.,S,,(((!(__GET_VAR(data__->VIS0_BOOL3,)) && !(__GET_VAR(data__->VIS0_BOOL2,))) && __GET_VAR(data__->VIS0_BOOL1,)) && __GET_VAR(data__->VIS0_BOOL0,)));
  __SET_VAR(data__->RS9.,R1,,((__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->R_TRIG6.Q,)) || __GET_VAR(data__->RAWBLUE_V0,)));
  RS_body__(&data__->RS9);
  __SET_VAR(data__->,BADBLUE_V0,,__GET_VAR(data__->RS9.Q1,));
  __SET_VAR(data__->R_TRIG7.,CLK,,__GET_VAR(data__->RETRO8,));
  R_TRIG_body__(&data__->R_TRIG7);
  __SET_VAR(data__->RS6.,S,,(((__GET_VAR(data__->VIS0_BOOL3,) && !(__GET_VAR(data__->VIS0_BOOL2,))) && !(__GET_VAR(data__->VIS0_BOOL1,))) && __GET_VAR(data__->VIS0_BOOL0,)));
  __SET_VAR(data__->RS6.,R1,,((__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->R_TRIG7.Q,)) || __GET_VAR(data__->RAWMETAL_V0,)));
  RS_body__(&data__->RS6);
  __SET_VAR(data__->,BADMETAL_V0,,__GET_VAR(data__->RS6.Q1,));
  __SET_VAR(data__->TON5.,IN,,(__GET_VAR(data__->BADBLUE_V0,) || __GET_VAR(data__->RAWBLUE_V0,)));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 9000, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  __SET_VAR(data__->RS10.,S,,(__GET_VAR(data__->BADBLUE_V0,) || __GET_VAR(data__->RAWBLUE_V0,)));
  __SET_VAR(data__->RS10.,R1,,(((((__GET_VAR(data__->BADGREEN_V0,) || __GET_VAR(data__->BADMETAL_V0,)) || __GET_VAR(data__->FACTORY_RESET,)) || __GET_VAR(data__->RAWGREEN_V0,)) || __GET_VAR(data__->RAWMETAL_V0,)) || __GET_VAR(data__->TON5.Q,)));
  RS_body__(&data__->RS10);
  __SET_VAR(data__->,PIV_ARM0_TURN,,__GET_VAR(data__->RS10.Q1,));
  __SET_VAR(data__->,PIV_ARM0_BELT_PLUS,,__GET_VAR(data__->RS10.Q1,));
  __SET_VAR(data__->,VARTIME6,,__GET_VAR(data__->TON5.ET,));
  __SET_VAR(data__->TON3.,IN,,(__GET_VAR(data__->BADMETAL_V0,) || __GET_VAR(data__->RAWMETAL_V0,)));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 7000, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  __SET_VAR(data__->RS7.,S,,(__GET_VAR(data__->BADMETAL_V0,) || __GET_VAR(data__->RAWMETAL_V0,)));
  __SET_VAR(data__->RS7.,R1,,(((((__GET_VAR(data__->BADBLUE_V0,) || __GET_VAR(data__->BADGREEN_V0,)) || __GET_VAR(data__->FACTORY_RESET,)) || __GET_VAR(data__->RAWBLUE_V0,)) || __GET_VAR(data__->RAWGREEN_V0,)) || __GET_VAR(data__->TON3.Q,)));
  RS_body__(&data__->RS7);
  __SET_VAR(data__->,PIV_ARM1_TURN,,__GET_VAR(data__->RS7.Q1,));
  __SET_VAR(data__->,PIV_ARM1_BELT_PLUS,,__GET_VAR(data__->RS7.Q1,));
  __SET_VAR(data__->,VARTIME5,,__GET_VAR(data__->TON3.ET,));
  __SET_VAR(data__->R_TRIG8.,CLK,,__GET_VAR(data__->RETRO0,));
  R_TRIG_body__(&data__->R_TRIG8);
  __SET_VAR(data__->RS13.,S,,(((!(__GET_VAR(data__->VIS1_BOOL3,)) && !(__GET_VAR(data__->VIS1_BOOL2,))) && !(__GET_VAR(data__->VIS1_BOOL1,))) && __GET_VAR(data__->VIS1_BOOL0,)));
  __SET_VAR(data__->RS13.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->R_TRIG8.Q,)));
  RS_body__(&data__->RS13);
  __SET_VAR(data__->,RAWBLUE_V1,,__GET_VAR(data__->RS13.Q1,));
  __SET_VAR(data__->F_TRIG3.,CLK,,__GET_VAR(data__->FRONT_LIM_PUSHER0,));
  F_TRIG_body__(&data__->F_TRIG3);
  __SET_VAR(data__->RS11.,S,,(((!(__GET_VAR(data__->VIS1_BOOL3,)) && !(__GET_VAR(data__->VIS1_BOOL2,))) && __GET_VAR(data__->VIS1_BOOL1,)) && __GET_VAR(data__->VIS1_BOOL0,)));
  __SET_VAR(data__->RS11.,R1,,(__GET_VAR(data__->F_TRIG3.Q,) || __GET_VAR(data__->FACTORY_RESET,)));
  RS_body__(&data__->RS11);
  __SET_VAR(data__->,BADBLUE_V1,,__GET_VAR(data__->RS11.Q1,));
  __SET_VAR(data__->F_TRIG4.,CLK,,__GET_VAR(data__->DIFF2,));
  F_TRIG_body__(&data__->F_TRIG4);
  __SET_VAR(data__->RS12.,S,,(__GET_VAR(data__->F_TRIG4.Q,) && __GET_VAR(data__->BADBLUE_V1,)));
  __SET_VAR(data__->RS12.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->FRONT_LIM_PUSHER0,)));
  RS_body__(&data__->RS12);
  __SET_VAR(data__->,PUSHER0,,__GET_VAR(data__->RS12.Q1,));
  __SET_VAR(data__->R_TRIG9.,CLK,,__GET_VAR(data__->RETRO4,));
  R_TRIG_body__(&data__->R_TRIG9);
  __SET_VAR(data__->RS16.,S,,(((!(__GET_VAR(data__->VIS2_BOOL3,)) && __GET_VAR(data__->VIS2_BOOL2,)) && __GET_VAR(data__->VIS2_BOOL1,)) && __GET_VAR(data__->VIS2_BOOL0,)));
  __SET_VAR(data__->RS16.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->R_TRIG9.Q,)));
  RS_body__(&data__->RS16);
  __SET_VAR(data__->,RAWMETAL_V2,,__GET_VAR(data__->RS16.Q1,));
  __SET_VAR(data__->F_TRIG5.,CLK,,__GET_VAR(data__->FRONT_LIM_PUSHER1,));
  F_TRIG_body__(&data__->F_TRIG5);
  __SET_VAR(data__->RS14.,S,,(((__GET_VAR(data__->VIS2_BOOL3,) && !(__GET_VAR(data__->VIS2_BOOL2,))) && !(__GET_VAR(data__->VIS2_BOOL1,))) && __GET_VAR(data__->VIS2_BOOL0,)));
  __SET_VAR(data__->RS14.,R1,,(__GET_VAR(data__->F_TRIG5.Q,) || __GET_VAR(data__->FACTORY_RESET,)));
  RS_body__(&data__->RS14);
  __SET_VAR(data__->,BADMETAL_V2,,__GET_VAR(data__->RS14.Q1,));
  __SET_VAR(data__->F_TRIG6.,CLK,,__GET_VAR(data__->DIFF1,));
  F_TRIG_body__(&data__->F_TRIG6);
  __SET_VAR(data__->RS15.,S,,(__GET_VAR(data__->F_TRIG6.Q,) && __GET_VAR(data__->BADMETAL_V2,)));
  __SET_VAR(data__->RS15.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->FRONT_LIM_PUSHER1,)));
  RS_body__(&data__->RS15);
  __SET_VAR(data__->,PUSHER1,,__GET_VAR(data__->RS15.Q1,));
  __SET_VAR(data__->RS17.,S,,(!(__GET_VAR(data__->DIFFUSE_3,)) && __GET_VAR(data__->START_MC0,)));
  __SET_VAR(data__->RS17.,R1,,(__GET_VAR(data__->DIFFUSE_3,) || __GET_VAR(data__->FACTORY_RESET,)));
  RS_body__(&data__->RS17);
  __SET_VAR(data__->,CONV_2M_3,,__GET_VAR(data__->RS17.Q1,));
  __SET_VAR(data__->RS18.,S,,__GET_VAR(data__->START_MC1,));
  __SET_VAR(data__->RS18.,R1,,__GET_VAR(data__->FACTORY_RESET,));
  RS_body__(&data__->RS18);
  __SET_VAR(data__->,CONV_2M_4,,__GET_VAR(data__->RS18.Q1,));
  __SET_VAR(data__->RS19.,S,,__GET_VAR(data__->START_MC2,));
  __SET_VAR(data__->RS19.,R1,,__GET_VAR(data__->FACTORY_RESET,));
  RS_body__(&data__->RS19);
  __SET_VAR(data__->,CONV_2M_2,,__GET_VAR(data__->RS19.Q1,));
  __SET_VAR(data__->F_TRIG7.,CLK,,__GET_VAR(data__->RETRO5,));
  F_TRIG_body__(&data__->F_TRIG7);
  __SET_VAR(data__->RS27.,S,,(!(__GET_VAR(data__->MC0_BUSY,)) && __GET_VAR(data__->START_MC0,)));
  __SET_VAR(data__->RS27.,R1,,((__GET_VAR(data__->F_TRIG7.Q,) && __GET_VAR(data__->MC0_BUSY,)) || __GET_VAR(data__->FACTORY_RESET,)));
  RS_body__(&data__->RS27);
  __SET_VAR(data__->,CONV_2M_7,,__GET_VAR(data__->RS27.Q1,));
  __SET_VAR(data__->F_TRIG8.,CLK,,__GET_VAR(data__->RETRO1,));
  F_TRIG_body__(&data__->F_TRIG8);
  __SET_VAR(data__->RS38.,S,,(!(__GET_VAR(data__->MC2_BUSY,)) && __GET_VAR(data__->START_MC2,)));
  __SET_VAR(data__->RS38.,R1,,((__GET_VAR(data__->F_TRIG8.Q,) && __GET_VAR(data__->MC2_BUSY,)) || __GET_VAR(data__->FACTORY_RESET,)));
  RS_body__(&data__->RS38);
  __SET_VAR(data__->,CONV_2M_0,,__GET_VAR(data__->RS38.Q1,));
  __SET_VAR(data__->R_TRIG10.,CLK,,__GET_VAR(data__->DIFFUSE_3,));
  R_TRIG_body__(&data__->R_TRIG10);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG10.Q,));
  __SET_VAR(data__->CTU0.,R,,__GET_VAR(data__->FACTORY_RESET,));
  __SET_VAR(data__->CTU0.,PV,,__GET_VAR(data__->PRESETVALUE_99,));
  CTU_body__(&data__->CTU0);
  __SET_VAR(data__->,DIGITAL_DISP1,,__GET_VAR(data__->CTU0.CV,));
  __SET_VAR(data__->R_TRIG11.,CLK,,__GET_VAR(data__->DIFFUSE_4,));
  R_TRIG_body__(&data__->R_TRIG11);
  __SET_VAR(data__->CTU2.,CU,,__GET_VAR(data__->R_TRIG11.Q,));
  __SET_VAR(data__->CTU2.,R,,__GET_VAR(data__->FACTORY_RESET,));
  __SET_VAR(data__->CTU2.,PV,,__GET_VAR(data__->PRESETVALUE_99,));
  CTU_body__(&data__->CTU2);
  __SET_VAR(data__->,DIGITAL_DISP0,,__GET_VAR(data__->CTU2.CV,));
  __SET_VAR(data__->R_TRIG12.,CLK,,__GET_VAR(data__->DIFFUSE_5,));
  R_TRIG_body__(&data__->R_TRIG12);
  __SET_VAR(data__->CTU1.,CU,,__GET_VAR(data__->R_TRIG12.Q,));
  __SET_VAR(data__->CTU1.,R,,__GET_VAR(data__->FACTORY_RESET,));
  __SET_VAR(data__->CTU1.,PV,,__GET_VAR(data__->PRESETVALUE_99,));
  CTU_body__(&data__->CTU1);
  __SET_VAR(data__->,DIGITAL_DISP2,,__GET_VAR(data__->CTU1.CV,));
  __SET_VAR(data__->R_TRIG13.,CLK,,__GET_VAR(data__->DIFFUSE_3,));
  R_TRIG_body__(&data__->R_TRIG13);
  __SET_VAR(data__->RS25.,S,,__GET_VAR(data__->R_TRIG13.Q,));
  __SET_VAR(data__->RS25.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || !(__GET_VAR(data__->DIFFUSE_3,))));
  RS_body__(&data__->RS25);
  __SET_VAR(data__->,GREEN_LIGHT,,__GET_VAR(data__->RS25.Q1,));
  __SET_VAR(data__->RS26.,S,,__GET_VAR(data__->DIFFUSE_3,));
  __SET_VAR(data__->RS26.,R1,,((__GET_VAR(data__->PNP1_Z,) && __GET_VAR(data__->PNP1_DETECT,)) || __GET_VAR(data__->FACTORY_RESET,)));
  RS_body__(&data__->RS26);
  __SET_VAR(data__->,PNP1_Z,,__GET_VAR(data__->RS26.Q1,));
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->PNP1_X,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->RS28.,S,,(__GET_VAR(data__->PNP1_Z,) && __GET_VAR(data__->PNP1_DETECT,)));
  __SET_VAR(data__->RS28.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || __GET_VAR(data__->TON0.Q,)));
  RS_body__(&data__->RS28);
  __SET_VAR(data__->,PNP1_GRAB,,__GET_VAR(data__->RS28.Q1,));
  __SET_VAR(data__->,VARTIME1,,__GET_VAR(data__->TON0.ET,));
  __SET_VAR(data__->RS29.,S,,__GET_VAR(data__->PNP1_GRAB,));
  __SET_VAR(data__->RS29.,R1,,(__GET_VAR(data__->FACTORY_RESET,) || !(__GET_VAR(data__->PNP1_GRAB,))));
  RS_body__(&data__->RS29);
  __SET_VAR(data__->,PNP1_X,,__GET_VAR(data__->RS29.Q1,));

  goto __end;

__end:
  return;
} // BIGPROJV1_body__() 





