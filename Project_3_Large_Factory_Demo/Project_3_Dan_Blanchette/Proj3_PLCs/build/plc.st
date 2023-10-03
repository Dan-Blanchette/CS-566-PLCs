TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK



FUNCTION_BLOCK python_eval
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_poll
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_gear
  VAR_INPUT
    N : UINT;
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    py_eval : python_eval;
    COUNTER : UINT;
    _TMP_ADD10_OUT : UINT;
    _TMP_EQ13_OUT : BOOL;
    _TMP_SEL15_OUT : UINT;
    _TMP_AND7_OUT : BOOL;
  END_VAR

  _TMP_ADD10_OUT := ADD(COUNTER, 1);
  _TMP_EQ13_OUT := EQ(N, _TMP_ADD10_OUT);
  _TMP_SEL15_OUT := SEL(_TMP_EQ13_OUT, _TMP_ADD10_OUT, 0);
  COUNTER := _TMP_SEL15_OUT;
  _TMP_AND7_OUT := AND(_TMP_EQ13_OUT, TRIG);
  py_eval(TRIG := _TMP_AND7_OUT, CODE := CODE);
  ACK := py_eval.ACK;
  RESULT := py_eval.RESULT;
END_FUNCTION_BLOCK


PROGRAM BigProjV1
  VAR
    FactoryIOReset : BOOL;
    Estop : BOOL;
    StartButton : BOOL;
    Vis0_Bool0 : BOOL;
    Vis0_Bool1 : BOOL;
    Vis0_Bool2 : BOOL;
    Vis0_Bool3 : BOOL;
    Diff0 : BOOL;
    MC0_Opened : BOOL;
    MC1_Opened : BOOL;
    MC2_Opened : BOOL;
    MC0_Busy : BOOL;
    MC1_Busy : BOOL;
    MC2_Busy : BOOL;
    MC0_HasError : BOOL;
    MC1_HasError : BOOL;
    MC2_HasError : BOOL;
    Selector0_State0_Off : BOOL;
    Selector0_State1_On : BOOL;
    Retro0 : BOOL;
    Retro1 : BOOL;
    Retro2 : BOOL;
    Retro3 : BOOL;
    Retro4 : BOOL;
    Diffuse_3 : BOOL;
    Diffuse_4 : BOOL;
    Diffuse_5 : BOOL;
    Vis1_Bool0 : BOOL;
    Vis1_Bool1 : BOOL;
    Vis1_Bool2 : BOOL;
    Vis1_Bool3 : BOOL;
    Vis2_Bool0 : BOOL;
    Vis2_Bool1 : BOOL;
    Vis2_Bool2 : BOOL;
    Vis2_Bool3 : BOOL;
    Diff1 : BOOL;
    Diff2 : BOOL;
    PnP0_Detect : BOOL;
    PnP0_Xmove : BOOL;
    PnP0_Zmove : BOOL;
    PnP0_Rotating : BOOL;
    PnP1_Detect : BOOL;
    PnP1_Xmove : BOOL;
    PnP1_Zmove : BOOL;
    PnP1_Rotating : BOOL;
    PnP2_Detect : BOOL;
    PnP2_Xmove : BOOL;
    PnP2_Zmove : BOOL;
    PnP2_Rotating : BOOL;
    PnP0_Gripper_Rotate : BOOL;
    PnP1_Gripper_Rotate : BOOL;
    PnP2_Gripper_Rotate : BOOL;
    Back_Lim_Pusher0 : BOOL;
    Back_Lim_Pusher1 : BOOL;
    Back_Lim_Pusher2 : BOOL;
    Front_Lim_Pusher0 : BOOL;
    Front_Lim_Pusher1 : BOOL;
    Front_Lim_Pusher2 : BOOL;
    Retro8 : BOOL;
    Retro5 : BOOL;
    Diffuse_6 : BOOL;
    Conv_2m_0 : BOOL;
    Conv_2m_1 : BOOL;
    Conv_2m_2 : BOOL;
    Conv_2m_3 : BOOL;
    Conv_2m_4 : BOOL;
    Conv_2m_5 : BOOL;
    Conv_4m_0 : BOOL;
    Conv_4m_2 : BOOL;
    Conv_4m_4 : BOOL;
    Conv_4m_5 : BOOL;
    Curved_Conv0_CW : BOOL;
    Curved_Conv1_CW : BOOL;
    Curved_Conv2_CCW : BOOL;
    Stop_MC0 : BOOL;
    Stop_MC1 : BOOL;
    Stop_MC2 : BOOL;
    Reset_MC0 : BOOL;
    Reset_MC1 : BOOL;
    Reset_MC2 : BOOL;
    Start_MC0 : BOOL;
    Start_MC1 : BOOL;
    Start_MC2 : BOOL;
    Piv_Arm0_Turn : BOOL;
    Piv_Arm1_Turn : BOOL;
    Piv_Arm0_Belt_Plus : BOOL;
    Piv_Arm1_Belt_Plus : BOOL;
    Piv_Arm0_Belt_Minus : BOOL;
    Piv_Arm1_Belt_Minus : BOOL;
    Pusher0 : BOOL;
    Pusher1 : BOOL;
    Pusher2 : BOOL;
    Spur_Conv0_Plus : BOOL;
    Spur_Conv1_Plus : BOOL;
    Spur_Conv0_Minus : BOOL;
    Spur_Conv1_Minus : BOOL;
    PnP0_X : BOOL;
    PnP1_X : BOOL;
    PnP2_X : BOOL;
    PnP0_Z : BOOL;
    PnP1_Z : BOOL;
    PnP2_Z : BOOL;
    PnP0_Grab : BOOL;
    PnP1_Grab : BOOL;
    PnP2_Grab : BOOL;
    PnP0_Rot_CW : BOOL;
    PnP1_Rot_CW : BOOL;
    PnP2_Rot_CW : BOOL;
    PnP0_Gripper_CW : BOOL;
    PnP1_Gripper_CW : BOOL;
    PnP2_Gripper_CW : BOOL;
    PnP0_Rot_CCW : BOOL;
    PnP1_Rot_CCW : BOOL;
    PnP2_Rot_CCW : BOOL;
    PnP0_Gripper_CCW : BOOL;
    PnP1_Gripper_CCW : BOOL;
    PnP2_Gripper_CCW : BOOL;
    StartButtonLight : BOOL;
    Conv_2m_6 : BOOL;
    Blue_Light : BOOL;
    Green_Light : BOOL;
    Yellow_Light : BOOL;
    StopBlade0 : BOOL;
    StopBlade1 : BOOL;
    StopBlade2 : BOOL;
    Conv_2m_7 : BOOL;
    Digital_Disp0 : INT;
    Digital_Disp1 : INT;
    Digital_Disp2 : INT;
  END_VAR
  VAR
    RS0 : RS;
    RS1 : RS;
    PresetValue_99 : INT := 99;
    Factory_Reset : BOOL;
    PnP1_Line_Reset : BOOL;
    MC_Max_0 : BOOL;
    RawGreen_v0 : BOOL;
    BadGreen_v0 : BOOL;
    RawMetal_v0 : BOOL;
    BadMetal_v0 : BOOL;
    RawBlue_v0 : BOOL;
    BadBlue_v0 : BOOL;
    BadMetal_v2 : BOOL;
    RawMetal_v2 : BOOL;
    RawBlue_v1 : BOOL;
    BadBlue_v1 : BOOL;
    Good_Blue : BOOL;
    Good_Green : BOOL;
    Good_Metal : BOOL;
    Bad_Blue : BOOL;
    Bad_Green : BOOL;
    Bad_Metal : BOOL;
    Bad_Blue_CNT : INT;
    Good_Blue_CNT : INT;
    RS2 : RS;
    RS3 : RS;
    RS4 : RS;
    RS6 : RS;
    RS7 : RS;
    RS5 : RS;
    RS8 : RS;
    RS9 : RS;
    RS10 : RS;
    RS11 : RS;
    RS13 : RS;
    RS12 : RS;
    RS14 : RS;
    RS15 : RS;
    RS16 : RS;
    L_D : BOOL;
    RS17 : RS;
    RS18 : RS;
    RS19 : RS;
    VarTime1 : TIME;
    VarTime2 : TIME;
    VarTime3 : TIME;
    VarTime4 : TIME;
    VarTime5 : TIME;
    VarTime6 : TIME;
    VarTime7 : TIME;
    PnPHasItem : BOOL;
    RS25 : RS;
    RS27 : RS;
    CTU0 : CTU;
    TON3 : TON;
    TON5 : TON;
    RS26 : RS;
    RS28 : RS;
    RS29 : RS;
    RS38 : RS;
    CTU1 : CTU;
    CTU2 : CTU;
    TON0 : TON;
    R_TRIG1 : R_TRIG;
    F_TRIG1 : F_TRIG;
    R_TRIG2 : R_TRIG;
    R_TRIG3 : R_TRIG;
    R_TRIG4 : R_TRIG;
    R_TRIG5 : R_TRIG;
    F_TRIG2 : F_TRIG;
    R_TRIG6 : R_TRIG;
    R_TRIG7 : R_TRIG;
    R_TRIG8 : R_TRIG;
    F_TRIG3 : F_TRIG;
    F_TRIG4 : F_TRIG;
    R_TRIG9 : R_TRIG;
    F_TRIG5 : F_TRIG;
    F_TRIG6 : F_TRIG;
    F_TRIG7 : F_TRIG;
    F_TRIG8 : F_TRIG;
    R_TRIG10 : R_TRIG;
    R_TRIG11 : R_TRIG;
    R_TRIG12 : R_TRIG;
    R_TRIG13 : R_TRIG;
  END_VAR

  R_TRIG1(CLK := FactoryIOReset);
  Factory_Reset := NOT(Estop) OR R_TRIG1.Q OR Selector0_State0_Off;
  F_TRIG1(CLK := StartButton);
  RS0(S := F_TRIG1.Q AND Selector0_State1_On, R1 := Factory_Reset);
  RS1(S := Estop AND NOT(FactoryIOReset) AND RS0.Q1, R1 := Factory_Reset);
  Conv_2m_0 := RS1.Q1;
  Conv_2m_1 := RS1.Q1;
  Curved_Conv0_CW := RS1.Q1;
  Curved_Conv1_CW := RS1.Q1;
  Curved_Conv2_CCW := RS1.Q1;
  Spur_Conv0_Minus := RS1.Q1;
  Spur_Conv1_Minus := RS1.Q1;
  Conv_2m_5 := RS1.Q1;
  Conv_4m_0 := RS1.Q1;
  PnP1_Line_Reset := NOT(PnP1_Grab) OR NOT(PnP1_X) OR NOT(PnP1_Z) OR NOT(PnP1_Detect) OR NOT(StopBlade0);
  Conv_4m_2 := RS1.Q1;
  Start_MC0 := RS1.Q1;
  Conv_4m_4 := RS1.Q1;
  Start_MC1 := RS1.Q1;
  Start_MC2 := RS1.Q1;
  Conv_2m_7 := RS1.Q1;
  StartButtonLight := RS1.Q1;
  Conv_2m_6 := RS1.Q1;
  Conv_4m_5 := RS1.Q1;
  R_TRIG2(CLK := Retro8);
  RS2(S := NOT(Vis0_Bool3) AND Vis0_Bool2 AND NOT(Vis0_Bool1) AND NOT(Vis0_Bool0), R1 := Factory_Reset OR R_TRIG2.Q);
  RawGreen_v0 := RS2.Q1;
  R_TRIG3(CLK := Retro8);
  RS5(S := NOT(Vis0_Bool3) AND Vis0_Bool2 AND Vis0_Bool1 AND Vis0_Bool0, R1 := Factory_Reset OR R_TRIG3.Q);
  RawMetal_v0 := RS5.Q1;
  R_TRIG4(CLK := Retro8);
  RS8(S := NOT(Vis0_Bool3) AND NOT(Vis0_Bool2) AND NOT(Vis0_Bool1) AND Vis0_Bool0, R1 := Factory_Reset OR R_TRIG4.Q);
  RawBlue_v0 := RS8.Q1;
  R_TRIG5(CLK := Retro8);
  RS3(S := NOT(Vis0_Bool3) AND Vis0_Bool2 AND Vis0_Bool1 AND NOT(Vis0_Bool0), R1 := Factory_Reset OR R_TRIG5.Q OR RawGreen_v0);
  BadGreen_v0 := RS3.Q1;
  F_TRIG2(CLK := Diff0);
  RS4(S := F_TRIG2.Q AND BadGreen_v0, R1 := Factory_Reset OR Front_Lim_Pusher2);
  Pusher2 := RS4.Q1;
  R_TRIG6(CLK := Retro8);
  RS9(S := NOT(Vis0_Bool3) AND NOT(Vis0_Bool2) AND Vis0_Bool1 AND Vis0_Bool0, R1 := Factory_Reset OR R_TRIG6.Q OR RawBlue_v0);
  BadBlue_v0 := RS9.Q1;
  R_TRIG7(CLK := Retro8);
  RS6(S := Vis0_Bool3 AND NOT(Vis0_Bool2) AND NOT(Vis0_Bool1) AND Vis0_Bool0, R1 := Factory_Reset OR R_TRIG7.Q OR RawMetal_v0);
  BadMetal_v0 := RS6.Q1;
  TON5(IN := BadBlue_v0 OR RawBlue_v0, PT := T#9000ms);
  RS10(S := BadBlue_v0 OR RawBlue_v0, R1 := BadGreen_v0 OR BadMetal_v0 OR Factory_Reset OR RawGreen_v0 OR RawMetal_v0 OR TON5.Q);
  Piv_Arm0_Turn := RS10.Q1;
  Piv_Arm0_Belt_Plus := RS10.Q1;
  VarTime6 := TON5.ET;
  TON3(IN := BadMetal_v0 OR RawMetal_v0, PT := T#7000ms);
  RS7(S := BadMetal_v0 OR RawMetal_v0, R1 := BadBlue_v0 OR BadGreen_v0 OR Factory_Reset OR RawBlue_v0 OR RawGreen_v0 OR TON3.Q);
  Piv_Arm1_Turn := RS7.Q1;
  Piv_Arm1_Belt_Plus := RS7.Q1;
  VarTime5 := TON3.ET;
  R_TRIG8(CLK := Retro0);
  RS13(S := NOT(Vis1_Bool3) AND NOT(Vis1_Bool2) AND NOT(Vis1_Bool1) AND Vis1_Bool0, R1 := Factory_Reset OR R_TRIG8.Q);
  RawBlue_v1 := RS13.Q1;
  F_TRIG3(CLK := Front_Lim_Pusher0);
  RS11(S := NOT(Vis1_Bool3) AND NOT(Vis1_Bool2) AND Vis1_Bool1 AND Vis1_Bool0, R1 := F_TRIG3.Q OR Factory_Reset);
  BadBlue_v1 := RS11.Q1;
  F_TRIG4(CLK := Diff2);
  RS12(S := F_TRIG4.Q AND BadBlue_v1, R1 := Factory_Reset OR Front_Lim_Pusher0);
  Pusher0 := RS12.Q1;
  R_TRIG9(CLK := Retro4);
  RS16(S := NOT(Vis2_Bool3) AND Vis2_Bool2 AND Vis2_Bool1 AND Vis2_Bool0, R1 := Factory_Reset OR R_TRIG9.Q);
  RawMetal_v2 := RS16.Q1;
  F_TRIG5(CLK := Front_Lim_Pusher1);
  RS14(S := Vis2_Bool3 AND NOT(Vis2_Bool2) AND NOT(Vis2_Bool1) AND Vis2_Bool0, R1 := F_TRIG5.Q OR Factory_Reset);
  BadMetal_v2 := RS14.Q1;
  F_TRIG6(CLK := Diff1);
  RS15(S := F_TRIG6.Q AND BadMetal_v2, R1 := Factory_Reset OR Front_Lim_Pusher1);
  Pusher1 := RS15.Q1;
  RS17(S := NOT(Diffuse_3) AND Start_MC0, R1 := Diffuse_3 OR Factory_Reset);
  Conv_2m_3 := RS17.Q1;
  RS18(S := Start_MC1, R1 := Factory_Reset);
  Conv_2m_4 := RS18.Q1;
  RS19(S := Start_MC2, R1 := Factory_Reset);
  Conv_2m_2 := RS19.Q1;
  F_TRIG7(CLK := Retro5);
  RS27(S := NOT(MC0_Busy) AND Start_MC0, R1 := F_TRIG7.Q AND MC0_Busy OR Factory_Reset);
  Conv_2m_7 := RS27.Q1;
  F_TRIG8(CLK := Retro1);
  RS38(S := NOT(MC2_Busy) AND Start_MC2, R1 := F_TRIG8.Q AND MC2_Busy OR Factory_Reset);
  Conv_2m_0 := RS38.Q1;
  R_TRIG10(CLK := Diffuse_3);
  CTU0(CU := R_TRIG10.Q, R := Factory_Reset, PV := PresetValue_99);
  Digital_Disp1 := CTU0.CV;
  R_TRIG11(CLK := Diffuse_4);
  CTU2(CU := R_TRIG11.Q, R := Factory_Reset, PV := PresetValue_99);
  Digital_Disp0 := CTU2.CV;
  R_TRIG12(CLK := Diffuse_5);
  CTU1(CU := R_TRIG12.Q, R := Factory_Reset, PV := PresetValue_99);
  Digital_Disp2 := CTU1.CV;
  R_TRIG13(CLK := Diffuse_3);
  RS25(S := R_TRIG13.Q, R1 := Factory_Reset OR NOT(Diffuse_3));
  Green_Light := RS25.Q1;
  RS26(S := Diffuse_3, R1 := PnP1_Z AND PnP1_Detect OR Factory_Reset);
  PnP1_Z := RS26.Q1;
  TON0(IN := PnP1_X, PT := T#1500ms);
  RS28(S := PnP1_Z AND PnP1_Detect, R1 := Factory_Reset OR TON0.Q);
  PnP1_Grab := RS28.Q1;
  VarTime1 := TON0.ET;
  RS29(S := PnP1_Grab, R1 := Factory_Reset OR NOT(PnP1_Grab));
  PnP1_X := RS29.Q1;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : BigProjV1;
  END_RESOURCE
END_CONFIGURATION
