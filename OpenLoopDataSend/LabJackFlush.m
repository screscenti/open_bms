%End Flush of LabJack for it start with correct values for next run
FIO4state_key = 0;
DAC0state_packVoltage = interp1(pack_voltage_eng,pack_voltage_raw,160)+0.018;
DAC1state_vehicleVoltage = interp1(vehicle_voltage_eng,vehicle_voltage_raw,0)+0.014;

pubstates = [FIO4state_key,DAC0state_packVoltage,DAC1state_vehicleVoltage];
pins = {'FIO4','DAC0','DAC1'};
sno = '440012786';
writeOut(pubstates,pins,sno);

DAC0state_packCurrent = interp1(pack_current_eng,pack_current_raw,0)+0.008;
DAC1state_chargerButton = 0;
pubstates = [DAC0state_packCurrent,DAC1state_chargerButton];
pins = {'DAC0','DAC1'};
sno = '440012853';
writeOut(pubstates,pins,sno);