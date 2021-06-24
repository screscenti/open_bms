% Autogenerated file: Wed Apr 14 09:37:32 2021
function writeCodeInfoFcn


% Load a ComponentInterface object from IR
codeIRInfoStruct = load('D:\Projects\BMS\P006n\08_Work_in_progress\Repo_Sync_folder\HiLCAN\slprj\openecu_ert\CB\tmwinternal\tlc\codeIRInfo.mat');
codeInfo = codeIRInfoStruct.codeInfo;



                
% Built-In Type: 8
 Type_8_R0_V0 = numerictype('boolean');
  Type_8_R0_V0.Name = 'boolean';
  Type_8_R0_V0.Identifier = 'boolean_T';
  Type_8_R0_V0.ReadOnly   = 0;
  Type_8_R0_V0.Volatile   = 0;
    
  % Matrix Type
  Type_18_R0_V0 = embedded.matrixtype;
  Type_18_R0_V0.BaseType   = Type_8_R0_V0;
    Type_18_R0_V0.Dimensions = [40];
        
% Variable: Var_EO0
Var_EO0 = RTW.Variable(Type_18_R0_V0, 'CB_cmd');
    Var_EO0.Owner           = '';
    Var_EO0.DeclarationFile = '';
    
        
    % Setting Outport#1's Implementation    
    codeInfo.Outports(1).Implementation = Var_EO0;
    
% Variable: Var_EO1
Var_EO1 = RTW.Variable(Type_8_R0_V0, 'CB_status');
    Var_EO1.Owner           = '';
    Var_EO1.DeclarationFile = '';
    
        
    % Setting Outport#2's Implementation    
    codeInfo.Outports(2).Implementation = Var_EO1;

skippedParameters = [];
      checkDataGraphicalNames(codeInfo.Parameters(1).GraphicalName, 'cblc_battChargingMode');


    
    % Setting Parameter#1's implementation  
    codeInfo.Parameters(1).Implementation = [];
      checkDataGraphicalNames(codeInfo.Parameters(2).GraphicalName, 'cblc_deltaSocThreshBalance');


    
    % Setting Parameter#2's implementation  
    codeInfo.Parameters(2).Implementation = [];
      checkDataGraphicalNames(codeInfo.Parameters(3).GraphicalName, 'cblc_socThreshBalance');


    
    % Setting Parameter#3's implementation  
    codeInfo.Parameters(3).Implementation = [];

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
type_RTModel  = embedded.opaquetype('RT_MODEL_CB');
      

% Pointer Type: Pointer to type_RTModel    
Ptrtype_RTModel_1_0 = embedded.pointertype;
   Ptrtype_RTModel_1_0.BaseType = type_RTModel;
    Ptrtype_RTModel_1_0.ReadOnly = 1;
    Ptrtype_RTModel_1_0.Volatile = 0;
    
    Ptrtype_RTModel_1_0.ReadOnly = 1;
        Arg_rtm = RTW.Argument;
    Arg_rtm.Type = Ptrtype_RTModel_1_0;
    Arg_rtm.Name = 'CB_M';
    tmpArgs = [tmpArgs; Arg_rtm];

        
    
% Variable: Var_RTModel
Var_RTModel = RTW.Variable(type_RTModel, 'RTModel');
    Var_RTModel.Owner           = '';
    Var_RTModel.DeclarationFile = '';
    
    
% Data Interface: idata_RTModel
idata_RTModel = RTW.DataInterface('', 'RTModel', Var_RTModel, []);
    
    tmpActualArgs = [tmpActualArgs; idata_RTModel];

  
  
  
  
   

  
  
  
    
  
    RegistrationFcn_Prototype = RTW.CImplementation;   
  RegistrationFcn_Prototype.HeaderFile = ['CB', '.h'];
    RegistrationFcn_Prototype.SourceFile = ['CB', '.c'];
  
  RegistrationFcn_Prototype.Name = 'CB_initialize';
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
  
  
    
    
                              
% Built-In Type: 0
Type_0_R1_V0 = numerictype('double');
  Type_0_R1_V0.Name = 'double';
  Type_0_R1_V0.Identifier = 'real_T';
  Type_0_R1_V0.ReadOnly   = 1;
  Type_0_R1_V0.Volatile   = 0;
    
  % Matrix Type
  Type_17_R1_V0 = embedded.matrixtype;
  Type_17_R1_V0.BaseType   = Type_0_R1_V0;
    Type_17_R1_V0.Dimensions = [40];
        
    
      codeInfo.Inports(2).Implementation.Identifier = ['i_' codeInfo.Inports(2).Implementation.Identifier];
      
        Arg_ci1 = RTW.Argument;
    Arg_ci1.Type = Type_17_R1_V0;
    Arg_ci1.Name = 'rtu_cell_soc';
    tmpArgs = [tmpArgs; Arg_ci1];

    tmpActualArgs = [tmpActualArgs; codeInfo.Inports(2)];

                        
% Built-In Type: 3
Type_3_R1_V0 = numerictype(0, 8, 0);
  Type_3_R1_V0.Name = 'uint8';
  Type_3_R1_V0.Identifier = 'uint8_T';
  Type_3_R1_V0.ReadOnly   = 1;
  Type_3_R1_V0.Volatile   = 0;
    
% Pointer Type: Pointer to Type_3_R1_V0    
PtrType_3_R1_V0_0_0 = embedded.pointertype;
   PtrType_3_R1_V0_0_0.BaseType = Type_3_R1_V0;
    PtrType_3_R1_V0_0_0.ReadOnly = 0;
    PtrType_3_R1_V0_0_0.Volatile = 0;
    
    
    
      codeInfo.Inports(3).Implementation.Identifier = ['i_' codeInfo.Inports(3).Implementation.Identifier];
      
        Arg_ci2 = RTW.Argument;
    Arg_ci2.Type = PtrType_3_R1_V0_0_0;
    Arg_ci2.Name = 'rtu_batt_mode';
    tmpArgs = [tmpArgs; Arg_ci2];

    tmpActualArgs = [tmpActualArgs; codeInfo.Inports(3)];

                  
      codeInfo.Outports(1).Implementation.Identifier = ['o_' codeInfo.Outports(1).Implementation.Identifier];
    
        Arg_co1 = RTW.Argument;
    Arg_co1.Type = Type_18_R0_V0;
    Arg_co1.Name = 'rty_CB_cmd';
    tmpArgs = [tmpArgs; Arg_co1];

    tmpActualArgs = [tmpActualArgs; codeInfo.Outports(1)];

                    % Pointer Type: Pointer to 'Type_8_R0_V0'    
Type_22_R0_V0 = embedded.pointertype;
  Type_22_R0_V0.BaseType = Type_8_R0_V0;
  Type_22_R0_V0.ReadOnly = 0; 
  Type_22_R0_V0.Volatile = 0;
        
      codeInfo.Outports(2).Implementation.Identifier = ['o_' codeInfo.Outports(2).Implementation.Identifier];
    
        Arg_co2 = RTW.Argument;
    Arg_co2.Type = Type_22_R0_V0;
    Arg_co2.Name = 'rty_CB_status';
    tmpArgs = [tmpArgs; Arg_co2];

    tmpActualArgs = [tmpActualArgs; codeInfo.Outports(2)];

  
  
  
  
          
    
    

  
          
    
    

  
      
    

  
      
    

 
  
   
  
  
  
  
  
  
  
  
  
  
      
    
      OutputUpdateFcn_Prototype = RTW.CImplementation;   
  OutputUpdateFcn_Prototype.HeaderFile = ['CB', '.h'];
    OutputUpdateFcn_Prototype.SourceFile = ['CB', '.c'];
  
  OutputUpdateFcn_Prototype.Name = 'CB';
  OutputUpdateFcn_Prototype.Arguments  = tmpArgs;
  OutputUpdateFcn_Prototype.Return     = tmpRet;

    
      OutputUpdateFcn_Interface = RTW.FunctionInterface;
  
  OutputUpdateFcn_Interface.Prototype    = OutputUpdateFcn_Prototype;
  OutputUpdateFcn_Interface.ActualArgs   = tmpActualArgs;
  OutputUpdateFcn_Interface.ActualReturn = tmpActualReturn;
  
  time_0 = codeInfo.TimingProperties(getIndexFromTimingInternalId(codeInfo.TimingInternalIds, 0));
      OutputUpdateFcn_Interface.Timing = time_0;
      codeInfo.OutputFunctions =  [codeInfo.OutputFunctions; OutputUpdateFcn_Interface'];
  

      
    

    
        
    
      
    
    
    
    


    

  


if ~isempty(skippedParameters)
codeInfo.Parameters(skippedParameters) = [];
end

codeInfo.InternalData = [codeInfo.InternalData; idata_RTModel];
codeInfo.InternalData(end+1) = idata_rt_errorStatus;

% Handling Right-Click Builds
ss = rtwprivate('getSourceSubsystemHandle',codeInfo.GraphicalPath);
% Check if Rt-Click build, then re-map SIDs
if ~isempty(ss) && rtwprivate('rtwattic','hasSIDMap')
   codeInfo = modifyCodeInfoForSubsystemBuild(ss, codeInfo);
end

  lookupTableArray = [];         
  if exist('expInports', 'var')
      save CB_mr_codeInfo.mat codeInfo expInports;
  else
      save CB_mr_codeInfo.mat codeInfo;
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
   
