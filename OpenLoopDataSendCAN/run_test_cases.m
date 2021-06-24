loadCalib;

tests_lists = [1,9];

stop_time = 660;

while true
    
    for test_case_idx = 1 : length(tests_lists)

        test_case_number = tests_lists(test_case_idx);
        disp(['Starting Case Number: ',num2str(test_case_number)]);
        
        load(sprintf('test_cases/TS%s',num2str(test_case_number)));
        load(sprintf('test_cases/TS%s_faults',num2str(test_case_number)));

        tic

        sim('OL_HiLData.slx',stop_time);
        elapsed_time = toc;

        if elapsed_time < 60
            pause(60 - elapsed_time);
        end

        pause(5);
    end
    
end