% Autogenerated file: Wed Apr 14 09:37:40 2021
function writeCodeInfoFcn


% Load a ComponentInterface object from IR
codeIRInfoStruct = load('D:\Projects\BMS\P006n\08_Work_in_progress\Repo_Sync_folder\HiLCAN\slprj\openecu_ert\CC\tmwinternal\tlc\codeIRInfo.mat');
codeInfo = codeIRInfoStruct.codeInfo;



          
% Built-In Type: 8
 Type_8_R0_V0 = numerictype('boolean');
  Type_8_R0_V0.Name = 'boolean';
  Type_8_R0_V0.Identifier = 'boolean_T';
  Type_8_R0_V0.ReadOnly   = 0;
  Type_8_R0_V0.Volatile   = 0;
        
% Variable: Var_EO0
Var_EO0 = RTW.Variable(Type_8_R0_V0, 'cc_neg_cmd');
    Var_EO0.Owner           = '';
    Var_EO0.DeclarationFile = '';
    
        
    % Setting Outport#1's Implementation    
    codeInfo.Outports(1).Implementation = Var_EO0;
    
% Variable: Var_EO1
Var_EO1 = RTW.Variable(Type_8_R0_V0, 'cc_main_cmd');
    Var_EO1.Owner           = '';
    Var_EO1.DeclarationFile = '';
    
        
    % Setting Outport#2's Implementation    
    codeInfo.Outports(2).Implementation = Var_EO1;
    
% Variable: Var_EO2
Var_EO2 = RTW.Variable(Type_8_R0_V0, 'cc_chg_cmd');
    Var_EO2.Owner           = '';
    Var_EO2.DeclarationFile = '';
    
        
    % Setting Outport#3's Implementation    
    codeInfo.Outports(3).Implementation = Var_EO2;
    
% Variable: Var_EO3
Var_EO3 = RTW.Variable(Type_8_R0_V0, 'cc_pre_cmd');
    Var_EO3.Owner           = '';
    Var_EO3.DeclarationFile = '';
    
        
    % Setting Outport#4's Implementation    
    codeInfo.Outports(4).Implementation = Var_EO3;
          
% Built-In Type: 3
Type_3_R0_V0 = numerictype(0, 8, 0);
  Type_3_R0_V0.Name = 'uint8';
  Type_3_R0_V0.Identifier = 'uint8_T';
  Type_3_R0_V0.ReadOnly   = 0;
  Type_3_R0_V0.Volatile   = 0;
        
% Variable: Var_EO4
Var_EO4 = RTW.Variable(Type_3_R0_V0, 'cc_precharge_fault');
    Var_EO4.Owner           = '';
    Var_EO4.DeclarationFile = '';
    
        
    % Setting Outport#5's Implementation    
    codeInfo.Outports(5).Implementation = Var_EO4;

skippedParameters = [];

  tmpParams = [];
if ~isempty(tmpParams)
codeInfo.Parameters = [codeInfo.Parameters; tmpParams];
end

          
  
  
  
  tmpArgs         = [];           
  tmpActualArgs   = [];           
  tmpRet          = [];           
  tmpActualReturn = [];           
    
      
% Char type    
Type_char_R1_V0 = embedded.chartype;
    Type_char_R1_V0.Identifier = 'char_T';
    Type_char_R1_V0.ReadOnly = 1;
    Type_char_R1_V0.Volatile = 0;
    

% Pointer Type: Pointer to Type_char_R1_V0    
PtrType_char_R1_V0_0_0 = embedded.pointertype;
   PtrType_char_R1_V0_0_0.BaseType = Type_char_R1_V0;
    PtrType_char_R1_V0_0_0.ReadOnly = 0;
    PtrType_char_R1_V0_0_0.Volatile = 0;
    

% Pointer Type: Pointer to PtrType_char_R1_V0_0_0    
PtrPtrType_char_R1_V0_0_0_0_0 = embedded.pointertype;
   PtrPtrType_char_R1_V0_0_0_0_0.BaseType = PtrType_char_R1_V0_0_0;
    PtrPtrType_char_R1_V0_0_0_0_0.ReadOnly = 0;
    PtrPtrType_char_R1_V0_0_0_0_0.Volatile = 0;
    
      Arg_rt_errorStatus = RTW.Argument;
    Arg_rt_errorStatus.Type = PtrPtrType_char_R1_V0_0_0_0_0;
    Arg_rt_errorStatus.Name = 'rt_errorStatus';
    tmpArgs = [tmpArgs; Arg_rt_errorStatus];

      
    
% Variable: Var_rt_errorStatus
Var_rt_errorStatus = RTW.Variable(PtrPtrType_char_R1_V0_0_0_0_0, 'rt_errorStatus');
    Var_rt_errorStatus.Owner           = '';
    Var_rt_errorStatus.DeclarationFile = '';
    
    
% Data Interface: idata_rt_errorStatus
idata_rt_errorStatus = RTW.DataInterface('', 'rt_errorStatus', Var_rt_errorStatus, []);
    
    tmpActualArgs = [tmpActualArgs; idata_rt_errorStatus];


    
    
    
  
    
  
  
    
  
  canParamStartIdx = length(codeInfo.Parameters) - 0 + 1;
  
  
    
    
  
  
  
  
          
    
    

  
          
    
    

  
          
    
    

  
          
    
    

  
          
    
    

  
      
    

  
      
    

  
      
    

  
      
    

  
      
    

 
  
  
  
  
  
  
      
% Opaque Data Type
type_RTModel  = embedded.opaquetype('RT_MODEL_CC');
      

% Pointer Type: Pointer to type_RTModel    
Ptrtype_RTModel_1_0 = embedded.pointertype;
   Ptrtype_RTModel_1_0.BaseType = type_RTModel;
    Ptrtype_RTModel_1_0.ReadOnly = 1;
    Ptrtype_RTModel_1_0.Volatile = 0;
    
    Ptrtype_RTModel_1_0.ReadOnly = 1;
        Arg_rtm = RTW.Argument;
    Arg_rtm.Type = Ptrtype_RTModel_1_0;
    Arg_rtm.Name = 'CC_M';
    tmpArgs = [tmpArgs; Arg_rtm];

        
    
% Variable: Var_RTModel
Var_RTModel = RTW.Variable(type_RTModel, 'RTModel');
    Var_RTModel.Owner           = '';
    Var_RTModel.DeclarationFile = '';
    
    
% Data Interface: idata_RTModel
idata_RTModel = RTW.DataInterface('', 'RTModel', Var_RTModel, []);
    
    tmpActualArgs = [tmpActualArgs; idata_RTModel];

  
  
  
  
   
          
% Opaque Data Type
type_localZCE  = embedded.opaquetype('rtZCE_CC');
      

% Pointer Type: Pointer to type_localZCE    
Ptrtype_localZCE_0_0 = embedded.pointertype;
   Ptrtype_localZCE_0_0.BaseType = type_localZCE;
    Ptrtype_localZCE_0_0.ReadOnly = 0;
    Ptrtype_localZCE_0_0.Volatile = 0;
    
        Arg_localZCE = RTW.Argument;
    Arg_localZCE.Type = Ptrtype_localZCE_0_0;
    Arg_localZCE.Name = 'localZCE';
    tmpArgs = [tmpArgs; Arg_localZCE];

        
    
% Variable: Var_localZCE
Var_localZCE = RTW.Variable(type_localZCE, 'localZCE');
    Var_localZCE.Owner           = '';
    Var_localZCE.DeclarationFile = '';
    
    
% Data Interface: idata_localZCE
idata_localZCE = RTW.DataInterface('', 'localZCE', Var_localZCE, []);
    
    tmpActualArgs = [tmpActualArgs; idata_localZCE];



  
  
  
    
  
    RegistrationFcn_Prototype = RTW.CImplementation;   
  RegistrationFcn_Prototype.HeaderFile = ['CC', '.h'];
    RegistrationFcn_Prototype.SourceFile = ['CC', '.c'];
  
  RegistrationFcn_Prototype.Name = 'CC_initialize';
  RegistrationFcn_Prototype.Arguments  = tmpArgs;
  RegistrationFcn_Prototype.Return     = tmpRet;

    RegistrationFcn_Interface = RTW.FunctionInterface;
  
  RegistrationFcn_Interface.Prototype    = RegistrationFcn_Prototype;
  RegistrationFcn_Interface.ActualArgs   = tmpActualArgs;
  RegistrationFcn_Interface.ActualReturn = tmpActualReturn;
  
  time_constant = codeInfo.TimingProperties(getIndexFromTimingInternalId(codeInfo.TimingInternalIds, -1));
      RegistrationFcn_Interface.Timing = time_constant;
      codeInfo.InitializeFunctions =  [codeInfo.InitializeFunctions; RegistrationFcn_Interface'];
  

      
      
    
    
    tmpArgs         = [];           
    tmpActualArgs   = [];           
    tmpRet          = [];           
    tmpActualReturn = [];           

    
      
  
  
    
  
    
  
  canParamStartIdx = length(codeInfo.Parameters) - 0 + 1;
  
  
    
    
                        
% Built-In Type: 8
 Type_8_R1_V0 = numerictype('boolean');
  Type_8_R1_V0.Name = 'boolean';
  Type_8_R1_V0.Identifier = 'boolean_T';
  Type_8_R1_V0.ReadOnly   = 1;
  Type_8_R1_V0.Volatile   = 0;
    
% Pointer Type: Pointer to Type_8_R1_V0    
PtrType_8_R1_V0_0_0 = embedded.pointertype;
   PtrType_8_R1_V0_0_0.BaseType = Type_8_R1_V0;
    PtrType_8_R1_V0_0_0.ReadOnly = 0;
    PtrType_8_R1_V0_0_0.Volatile = 0;
    
    
    
      codeInfo.Inports(1).Implementation.Identifier = ['i_' codeInfo.Inports(1).Implementation.Identifier];
      
        Arg_ci0 = RTW.Argument;
    Arg_ci0.Type = PtrType_8_R1_V0_0_0;
    Arg_ci0.Name = 'rtu_bsc_main_cc_cmd';
    tmpArgs = [tmpArgs; Arg_ci0];

    tmpActualArgs = [tmpActualArgs; codeInfo.Inports(1)];

                  
    
      codeInfo.Inports(2).Implementation.Identifier = ['i_' codeInfo.Inports(2).Implementation.Identifier];
      
        Arg_ci1 = RTW.Argument;
    Arg_ci1.Type = PtrType_8_R1_V0_0_0;
    Arg_ci1.Name = 'rtu_bsc_chg_cc_cmd';
    tmpArgs = [tmpArgs; Arg_ci1];

    tmpActualArgs = [tmpActualArgs; codeInfo.Inports(2)];

                        
% Built-In Type: 0
Type_0_R1_V0 = numerictype('double');
  Type_0_R1_V0.Name = 'double';
  Type_0_R1_V0.Identifier = 'real_T';
  Type_0_R1_V0.ReadOnly   = 1;
  Type_0_R1_V0.Volatile   = 0;
    
% Pointer Type: Pointer to Type_0_R1_V0    
PtrType_0_R1_V0_0_0 = embedded.pointertype;
   PtrType_0_R1_V0_0_0.BaseType = Type_0_R1_V0;
    PtrType_0_R1_V0_0_0.ReadOnly = 0;
    PtrType_0_R1_V0_0_0.Volatile = 0;
    
    
    
      codeInfo.Inports(3).Implementation.Identifier = ['i_' codeInfo.Inports(3).Implementation.Identifier];
      
        Arg_ci2 = RTW.Argument;
    Arg_ci2.Type = PtrType_0_R1_V0_0_0;
    Arg_ci2.Name = 'rtu_vitm_pack_voltage';
    tmpArgs = [tmpArgs; Arg_ci2];

    tmpActualArgs = [tmpActualArgs; codeInfo.Inports(3)];

                  
    
      codeInfo.Inports(4).Implementation.Identifier = ['i_' codeInfo.Inports(4).Implementation.Identifier];
      
        Arg_ci3 = RTW.Argument;
    Arg_ci3.Type = PtrType_0_R1_V0_0_0;
    Arg_ci3.Name = 'rtu_vitm_veh_voltage';
    tmpArgs = [tmpArgs; Arg_ci3];

    tmpActualArgs = [tmpActualArgs; codeInfo.Inports(4)];

                  
    
      codeInfo.Inports(5).Implementation.Identifier = ['i_' codeInfo.Inports(5).Implementation.Identifier];
      
        Arg_ci4 = RTW.Argument;
    Arg_ci4.Type = PtrType_0_R1_V0_0_0;
    Arg_ci4.Name = 'rtu_pre_chg_fault_reset';
    tmpArgs = [tmpArgs; Arg_ci4];

    tmpActualArgs = [tmpActualArgs; codeInfo.Inports(5)];

                    % Pointer Type: Pointer to 'Type_8_R0_V0'    
Type_19_R0_V0 = embedded.pointertype;
  Type_19_R0_V0.BaseType = Type_8_R0_V0;
  Type_19_R0_V0.ReadOnly = 0; 
  Type_19_R0_V0.Volatile = 0;
        
      codeInfo.Outports(1).Implementation.Identifier = ['o_' codeInfo.Outports(1).Implementation.Identifier];
    
        Arg_co1 = RTW.Argument;
    Arg_co1.Type = Type_19_R0_V0;
    Arg_co1.Name = 'rty_cc_neg_cmd';
    tmpArgs = [tmpArgs; Arg_co1];

    tmpActualArgs = [tmpActualArgs; codeInfo.Outports(1)];

                  
      codeInfo.Outports(2).Implementation.Identifier = ['o_' codeInfo.Outports(2).Implementation.Identifier];
    
        Arg_co2 = RTW.Argument;
    Arg_co2.Type = Type_19_R0_V0;
    Arg_co2.Name = 'rty_cc_main_cmd';
    tmpArgs = [tmpArgs; Arg_co2];

    tmpActualArgs = [tmpActualArgs; codeInfo.Outports(2)];

                  
      codeInfo.Outports(3).Implementation.Identifier = ['o_' codeInfo.Outports(3).Implementation.Identifier];
    
        Arg_co3 = RTW.Argument;
    Arg_co3.Type = Type_19_R0_V0;
    Arg_co3.Name = 'rty_cc_chg_cmd';
    tmpArgs = [tmpArgs; Arg_co3];

    tmpActualArgs = [tmpActualArgs; codeInfo.Outports(3)];

                  
      codeInfo.Outports(4).Implementation.Identifier = ['o_' codeInfo.Outports(4).Implementation.Identifier];
    
        Arg_co4 = RTW.Argument;
    Arg_co4.Type = Type_19_R0_V0;
    Arg_co4.Name = 'rty_cc_pre_cmd';
    tmpArgs = [tmpArgs; Arg_co4];

    tmpActualArgs = [tmpActualArgs; codeInfo.Outports(4)];

                    % Pointer Type: Pointer to 'Type_3_R0_V0'    
Type_21_R0_V0 = embedded.pointertype;
  Type_21_R0_V0.BaseType = Type_3_R0_V0;
  Type_21_R0_V0.ReadOnly = 0; 
  Type_21_R0_V0.Volatile = 0;
        
      codeInfo.Outports(5).Implementation.Identifier = ['o_' codeInfo.Outports(5).Implementation.Identifier];
    
        Arg_co5 = RTW.Argument;
    Arg_co5.Type = Type_21_R0_V0;
    Arg_co5.Name = 'rty_cc_precharge_fault';
    tmpArgs = [tmpArgs; Arg_co5];

    tmpActualArgs = [tmpActualArgs; codeInfo.Outports(5)];

                    
% Opaque Data Type
type_localDW  = embedded.opaquetype('rtDW_CC');
      

% Pointer Type: Pointer to type_localDW    
Ptrtype_localDW_0_0 = embedded.pointertype;
   Ptrtype_localDW_0_0.BaseType = type_localDW;
    Ptrtype_localDW_0_0.ReadOnly = 0;
    Ptrtype_localDW_0_0.Volatile = 0;
    
        Arg_localDW = RTW.Argument;
    Arg_localDW.Type = Ptrtype_localDW_0_0;
    Arg_localDW.Name = 'localDW';
    tmpArgs = [tmpArgs; Arg_localDW];

        
    
% Variable: Var_localDW
Var_localDW = RTW.Variable(type_localDW, 'localDW');
    Var_localDW.Owner           = '';
    Var_localDW.DeclarationFile = '';
    
    
% Data Interface: idata_localDW
idata_localDW = RTW.DataInterface('', 'localDW', Var_localDW, []);
    
    tmpActualArgs = [tmpActualArgs; idata_localDW];


                      Arg_localZCE = RTW.Argument;
    Arg_localZCE.Type = Ptrtype_localZCE_0_0;
    Arg_localZCE.Name = 'localZCE';
    tmpArgs = [tmpArgs; Arg_localZCE];

        
    tmpActualArgs = [tmpActualArgs; idata_localZCE];


  
  
  
  
          
    
    

  
          
    
    

  
          
    
    

  
          
    
    

  
          
    
    

  
      
    

  
      
    

  
      
    

  
      
    

  
      
    

 
  
   
  
  
  
  
  
  
  
  
  
  
      
    
      OutputUpdateFcn_Prototype = RTW.CImplementation;   
  OutputUpdateFcn_Prototype.HeaderFile = ['CC', '.h'];
    OutputUpdateFcn_Prototype.SourceFile = ['CC', '.c'];
  
  OutputUpdateFcn_Prototype.Name = 'CC';
  OutputUpdateFcn_Prototype.Arguments  = tmpArgs;
  OutputUpdateFcn_Prototype.Return     = tmpRet;

    
      OutputUpdateFcn_Interface = RTW.FunctionInterface;
  
  OutputUpdateFcn_Interface.Prototype    = OutputUpdateFcn_Prototype;
  OutputUpdateFcn_Interface.ActualArgs   = tmpActualArgs;
  OutputUpdateFcn_Interface.ActualReturn = tmpActualReturn;
  
  time_0 = codeInfo.TimingProperties(getIndexFromTimingInternalId(codeInfo.TimingInternalIds, 0));
      OutputUpdateFcn_Interface.Timing = time_0;
      codeInfo.OutputFunctions =  [codeInfo.OutputFunctions; OutputUpdateFcn_Interface'];
  

      
    

    
        
    
    
    tmpArgs         = [];           
    tmpActualArgs   = [];           
    tmpRet          = [];           
    tmpActualReturn = [];           

    
      
  
  
    
  
    
  
  canParamStartIdx = length(codeInfo.Parameters) - 0 + 1;
  
  
    
    
                      Arg_localDW = RTW.Argument;
    Arg_localDW.Type = Ptrtype_localDW_0_0;
    Arg_localDW.Name = 'localDW';
    tmpArgs = [tmpArgs; Arg_localDW];

        
    tmpActualArgs = [tmpActualArgs; idata_localDW];


  
  
  
  
          
    
    

  
          
    
    

  
          
    
    

  
          
    
    

  
          
    
    

  
      
    

  
      
    

  
      
    

  
      
    

  
      
    

 
  
   
  
  
  
  
  
  
  
  
  
  
      
    
      InitializeFcn_Prototype = RTW.CImplementation;   
  InitializeFcn_Prototype.HeaderFile = ['CC', '.h'];
    InitializeFcn_Prototype.SourceFile = ['CC', '.c'];
  
  InitializeFcn_Prototype.Name = 'CC_Init';
  InitializeFcn_Prototype.Arguments  = tmpArgs;
  InitializeFcn_Prototype.Return     = tmpRet;

    
      InitializeFcn_Interface = RTW.FunctionInterface;
  
  InitializeFcn_Interface.Prototype    = InitializeFcn_Prototype;
  InitializeFcn_Interface.ActualArgs   = tmpActualArgs;
  InitializeFcn_Interface.ActualReturn = tmpActualReturn;
  
        time_constant = codeInfo.TimingProperties(getIndexFromTimingInternalId(codeInfo.TimingInternalIds, -1));
  InitializeFcn_Interface.Timing = time_constant;
  codeInfo.InitConditionsFunction = InitializeFcn_Interface;    

  

    
      
    
    
    
    


    

  


if ~isempty(skippedParameters)
codeInfo.Parameters(skippedParameters) = [];
end

codeInfo.InternalData = [codeInfo.InternalData; idata_RTModel];
codeInfo.InternalData(end+1) = idata_localDW;
codeInfo.InternalData(end+1) = idata_localZCE;
codeInfo.InternalData(end+1) = idata_rt_errorStatus;

% Handling Right-Click Builds
ss = rtwprivate('getSourceSubsystemHandle',codeInfo.GraphicalPath);
% Check if Rt-Click build, then re-map SIDs
if ~isempty(ss) && rtwprivate('rtwattic','hasSIDMap')
   codeInfo = modifyCodeInfoForSubsystemBuild(ss, codeInfo);
end

  lookupTableArray = [];         
  if exist('expInports', 'var')
      save CC_mr_codeInfo.mat codeInfo expInports;
  else
      save CC_mr_codeInfo.mat codeInfo;
  end
returnVal = 1;

% End Function: writeCodeInfoFcn

function idx = getIndexFromTimingInternalId(internalIdVec, internalId)
 idx = find(internalIdVec == internalId);
 if (isempty(idx) || (length(idx) > 1))
    ciMsg = 'Time object cannot be empty'; 
    ciExc = MException('RTW:buildProcess:CodeInfoInternalError',ciMsg);
    throw(ciExc);
  end
% End Function: getIndexFromTimingInternalId

function checkDataGraphicalNames(ciName, rtwName)
  if (strcmp(ciName, rtwName) ~= 1)
    ciMsg = ['Name mismatch: ', ciName, ' and ', rtwName]; 
    ciExc = MException('RTW:buildProcess:CodeInfoInternalError',ciMsg);
    throw(ciExc);
  end
% End Function: checkDataGraphicalNames

function iData = getInternalDataByName(iDataVec, iDataName)
 iData = find(iDataVec, 'GraphicalName', iDataName);
 if (isempty(iData) || (length(iData) > 1))
    ciMsg = 'Internal Data object cannot be empty'; 
    ciExc = MException('RTW:buildProcess:CodeInfoInternalError',ciMsg);
    throw(ciExc);
  end
% End Function: getInternalDataByName

function iData = getInternalDataByVariableName(iDataVec, iDataVariableName)
 iData = [];
 for idxData = 1:numel(iDataVec)
    if strcmp(iDataVariableName, iDataVec(idxData).Implementation.VariableName)
       iData = iDataVec(idxData);
       break
    end
 end
 if isempty(iData)
    ciMsg = 'Internal Data object cannot be empty'; 
    ciExc = MException('RTW:buildProcess:CodeInfoInternalError',ciMsg);
    throw(ciExc);
  end
% End Function: getInternalDataByVariableName

function codeInfo = modifyCodeInfoForSubsystemBuild(ss, codeInfo)
    
% Extract Subsystem Build Map from AtticData
    Subsystem_Build_Mapping = rtwprivate('rtwattic','getSIDMap');

% Parameters
    for i = 1:length(codeInfo.Parameters)
        sid = codeInfo.Parameters(i).SID;        

        sid = Simulink.ID.getSubsystemBuildSID(sid,ss, Subsystem_Build_Mapping);
        codeInfo.Parameters(i).SID = sid;        
    end
    
% Data Stores
     for i = 1:length(codeInfo.DataStores)
         sid = codeInfo.DataStores(i).SID;         

         sid = Simulink.ID.getSubsystemBuildSID(sid,ss, Subsystem_Build_Mapping);
         codeInfo.DataStores(i).SID = sid;
     end
    
% Inports
    for i = 1:length(codeInfo.Inports)
        sid = codeInfo.Inports(i).SID;
        
        sid = Simulink.ID.getSubsystemBuildSID(sid,ss, Subsystem_Build_Mapping);
        codeInfo.Inports(i).SID = sid;
    end
    
% Outports
    for i = 1:length(codeInfo.Outports)
        sid = codeInfo.Outports(i).SID;
 
        sid = Simulink.ID.getSubsystemBuildSID(sid,ss, Subsystem_Build_Mapping);
        codeInfo.Outports(i).SID = sid;
    end    
   
