:: This command will shutdown your computer after specified time v1.0
@echo off
set "input=%1"
set /a time=input * 60
shutdown -s -t %time%
