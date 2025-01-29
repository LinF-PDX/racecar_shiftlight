zeros = linspace(0,0,60);
%Full brightness
amber = [20 20 40 20 20 40 20 20 40 40 40 40 40 40 40 20 20 20 20 20 20 20 20 20];
all_amber = [amber amber amber amber amber amber amber amber amber amber amber amber amber amber zeros];
red = [20 20 20 20 20 20 20 20 40 40 40 40 40 40 40 20 20 20 20 20 20 20 20 20];
green = [40 40 40 40 40 40 40 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20];
blue = [20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 40 40 40 40 40 40 40 20];
%Day
green_day = [20 20 20 40 40 20 40 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20];
red_day = [20 20 20 20 20 20 20 20 20 20 20 40 40 40 40 20 20 20 20 20 20 20 20 20];
blue_day = [20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 40 40 40 40 20];
rgb_day = [green_day green_day red_day red_day blue_day blue_day blue_day blue_day blue_day blue_day red_day red_day green_day green_day zeros];
red_day_all = [red_day red_day red_day red_day red_day red_day red_day red_day red_day red_day red_day red_day red_day red_day zeros];

stage1_day = [green_day linspace(20,20,288) green_day zeros];
stage2_day = [green_day green_day linspace(20,20,240) green_day green_day zeros];
stage3_day = [green_day green_day red_day linspace(20,20,192) red_day green_day green_day zeros];
stage4_day = [green_day green_day red_day red_day linspace(20,20,144) red_day red_day green_day green_day zeros];
stage5_day = [green_day green_day red_day red_day blue_day linspace(20,20,96) blue_day red_day red_day green_day green_day zeros];
stage6_day = [green_day green_day red_day red_day blue_day blue_day linspace(20,20,48) blue_day blue_day red_day red_day green_day green_day zeros];
stage7_day = [green_day green_day red_day red_day blue_day blue_day blue_day blue_day blue_day blue_day red_day red_day green_day green_day zeros];
%Night
green_night = [20 20 20 20 20 40 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20];
red_night = [20 20 20 20 20 20 20 20 20 20 20 20 20 40 20 20 20 20 20 20 20 20 20 20];
blue_night = [20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 40 20 20];
rgb_night = [green_night green_night red_night red_night blue_night blue_night blue_night blue_night blue_night blue_night red_night red_night green_night green_night zeros];
%Dim
red_dim = [20 20 20 20 20 20 20 20 20 20 20 20 40 40 40 20 20 20 20 20 20 20 20 20];
red_dim1 = [20 20 20 20 20 20 20 20 20 20 20 40 40 40 40 20 20 20 20 20 20 20 20 20];
red_dim2 = [20 20 20 20 20 20 20 20 20 20 40 40 40 40 40 20 20 20 20 20 20 20 20 20];

green_dim = [20 20 20 20 40 40 40 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20];
green_dim1 = [20 20 20 40 40 20 40 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20];
green_dim2 = [20 20 40 40 40 40 40 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20];

blue_dim = [20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 40 40 40 20];
blue_dim1 = [20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 40 40 40 40 20];
blue_dim2 = [20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 40 40 20 20];

one_off = [linspace(20, 20, 24)];
all_off = [one_off one_off one_off one_off one_off one_off one_off one_off one_off one_off one_off one_off one_off one_off zeros]; 

rgb = [green_dim1 green_dim1 green_dim1 green_dim1 green_dim1 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 blue_dim1 blue_dim1 blue_dim1 blue_dim1 zeros];
red_all = [red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 zeros];

stage_dim_day = [green_dim1 green_dim1 red_dim2 red_dim2 blue_dim1 blue_dim1 blue_dim1 blue_dim1 blue_dim1 blue_dim1 red_dim2 red_dim2 green_dim1 green_dim1 zeros];
stage1 = [green_dim1 green_dim1 green_dim1 green_dim1 green_dim1 linspace(20,20,216) zeros];
stage2 = [green_dim1 green_dim1 green_dim1 green_dim1 green_dim1 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 linspace(20,20,96) zeros];
stage3 = [green_dim1 green_dim1 green_dim1 green_dim1 green_dim1 red_dim2 red_dim2 red_dim2 red_dim2 red_dim2 blue_dim1 blue_dim1 blue_dim1 blue_dim1 zeros];

load('shiftlight_table.mat');





%Gear ratios
first_gear_ratio = 3.267;
second_gear_ratio = 2.04;
third_gear_ratio = 1.429;
forth_gear_ratio = 1.073;
fifth_gear_ratio = 0.83;
sixth_gear_ratio = 0.647;
final_drive_ratio = 4.765;

tire_radius = 0.31265; %based on 215/45/17

