path = mfilename('fullpath');
feature_path = regexp(path,'.+(?=\\.+$)','match');
feature_path = feature_path{1};
addpath(feature_path);

BMS_root_path = regexp(path,'.+(?=\\.+\\.+$)','match');
BMS_root_path = BMS_root_path{1};

params_path = fullfile(feature_path,'params','battery_mode_params');
run(params_path);