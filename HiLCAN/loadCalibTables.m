mat = dir('calibTables\*.mat'); 
curdir = pwd;
for q = 1:length(mat) 
    load(fullfile(curdir,'calibTables',mat(q).name));
end
disp('Tables and Sensor Calibs loaded');