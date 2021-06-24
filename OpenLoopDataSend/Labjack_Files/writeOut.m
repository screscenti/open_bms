function writeOut(pubstates,pins,sno)

% Make the LJM .NET assembly visible in MATLAB
ljmAsm = NET.addAssembly('LabJack.LJM');

% Creating an object to nested class LabJack.LJM.CONSTANTS
t = ljmAsm.AssemblyHandle.GetType('LabJack.LJM+CONSTANTS');
LJM_CONSTANTS = System.Activator.CreateInstance(t);

handle = 0;

try
    [ljmError, handle] = LabJack.LJM.OpenS('T4', 'USB', sno, handle);

    %showDeviceInfo(handle);
    numPins = length(pubstates);
    % Setup and call eWriteNames to write values.
    numFrames = numPins;
    aNames = NET.createArray('System.String', numFrames);
    aValues = NET.createArray('System.Double', numFrames);
    for i=1:numFrames
        aNames(i) = pins{i};
        aValues(i) = pubstates(i);
    end

    LabJack.LJM.eWriteNames(handle, numFrames, aNames, aValues, 0);

%     disp('eWriteNames:');
%     for i=1:numFrames,
%         disp(['  Name: ' char(aNames(i)) ', Value: ' num2str(aValues(i))])
%     end
catch e
    showErrorMessage(e)
    LabJack.LJM.CloseAll();
    return
end

try
    % Close handle
    LabJack.LJM.Close(handle);
catch e
    showErrorMessage(e)
end

end
