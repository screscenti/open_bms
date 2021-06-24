function out = readIn(pins,sno)

% Make the LJM .NET assembly visible in MATLAB
ljmAsm = NET.addAssembly('LabJack.LJM');

% Creating an object to nested class LabJack.LJM.CONSTANTS
t = ljmAsm.AssemblyHandle.GetType('LabJack.LJM+CONSTANTS');
LJM_CONSTANTS = System.Activator.CreateInstance(t);

handle = 0;

try
    [ljmError, handle] = LabJack.LJM.OpenS('T4', 'USB', sno, handle);

    %showDeviceInfo(handle);
    numPins = length(pins);
    % Setup and call eWriteNames to write values.
    numFrames = numPins;
    out = zeros(1,numFrames);
    aNames = NET.createArray('System.String', numFrames);
    aValues = NET.createArray('System.Double', numFrames);
    for i=1:numFrames
        aNames(i) = pins{i};
    end

    LabJack.LJM.eReadNames(handle, numFrames, aNames, aValues, 0);
    
    for i=1:numFrames
        out(i) = aValues(i);
    end

%     disp('eReadNames results:')
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
