##  Copyright 2021 Exiel
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
##   limitations under the License.

#!/bin/sh

EXECUTION_DIR=$(pwd)
EXECUTABLE_DIR="`dirname \"$0\"`"
EXECUTABLE_DIR="`( cd \"$EXECUTABLE_DIR\" && pwd )`"

LIB_PATH="$HOME/Projets/My_Lib/"
LIB_BACKUP_PATH="$EXECUTABLE_DIR/backup"
DATE_HOURS=$(date +'%m/%d/%Y | %R')
DATE=$(date +'%m_%d_%Y')
HOURS=$(date +'%H:%M:%S')
LOG_PATH="$EXECUTABLE_DIR/log/$DATE"
LOG_PTR=1
PROJECTMEM_PATH="$EXECUTABLE_DIR/project_mem"

COMMON_PATH="project_struct/common/"
GRAPHICAL_PATH="project_struct/graphical"
MATH_PATH="project_struct/math"
PROJECT_TYPE=""

BACKUP_LIB_PATH="backup/"

initLog() {
    if [ -e "$LOG_PATH.log" ]; then
        while [ -e "$LOG_PATH($LOG_PTR).log" ]; do
            LOG_PTR=$((LOG_PTR + 1))
        done
        LOG_PATH="$EXECUTABLE_DIR/log/$DATE($LOG_PTR).log"
        touch "$LOG_PATH"
    else
        LOG_PATH="$EXECUTABLE_DIR/log/$DATE.log"
        touch "$LOG_PATH"
    fi
}

initProjectMem() {
    echo "[$HOURS]\tCalled initProjectMem function." >>$LOG_PATH
    if [ -e "$PROJECTMEM_PATH" ]; then
        echo "[$HOURS]\tProject_mem file already exist." >>$LOG_PATH
    else
        echo "[$HOURS]\tCreating Project_mem file." >>$LOG_PATH
        touch "$PROJECTMEM_PATH"
    fi
}

initLib() {
    echo "[$HOURS]\tCalled initLib function." >>$LOG_PATH
    if [ $LIB_PATH = "" ]; then
        echo "You need to set the LIB_PATH in the config file."
        echo "[$HOURS]\tERROR: LIB_PATH not set." >>$LOG_PATH
    fi
    if [ $(diff -r $LIB_PATH $LIB_BACKUP_PATH | grep -c .) -gt 0 ]; then
        updateLib
    else
        echo "[$HOURS]\tLib Backup up to date." >>$LOG_PATH
    fi
}

updateLib() {
    echo "[$HOURS]\tCalled updateLib function." >>$LOG_PATH
    echo "[$HOURS]\tUpdating Lib Backup." >>$LOG_PATH
    cp -r "$LIB_PATH/." "$LIB_BACKUP_PATH"
}

copyProjectStruct() {
    echo "[$HOURS]\tCalled copyProjectStruct function." >>$LOG_PATH
    echo "[$HOURS]\tCopying Project struct file $PROJECT_TYPE to => $EXECUTION_DIR" >>$LOG_PATH
    cp -r "$EXECUTABLE_DIR/project_struct/$PROJECT_TYPE/." "$EXECUTION_DIR"
    cp -r "$LIB_BACKUP_PATH/." "$EXECUTION_DIR"
}

initCommit() {
    make lib -C $EXECUTION_DIR
    make pushgit "Init Commit" -C $EXECUTION_DIR
}

end() {
    echo "[$HOURS]\tCalled end function." >>$LOG_PATH
    echo "\n\nScript APS ended. [$DATE_HOURS]" >>$LOG_PATH
    exit 0
}

help() {
    echo "[$HOURS]\tCalled help function." >>$LOG_PATH
    echo "\n\nUsage : aps [OPTION]..."
    echo "Create the init structure projet dir of common, graphical and math project"
    echo "Backup your lib and update it on all project stored in mem file."
    echo "Auto update the project struct and auto-push the project on the repos."
    echo "Can also push the project on the repos.\n"
    echo "At least one argument is necessary."
    echo " -c   Select common project struct"
    echo " -g   Select Graphical project struct"
    echo " -m   Select Maths project struct"
    echo " -h   Show the help"
}

initLog
echo "Script APS started. [$DATE_HOURS]\n\n" >>$LOG_PATH
initProjectMem
initLib
case $1 in
"-c")
    PROJECT_TYPE="common"
    copyProjectStruct
    initCommit
    ;;
"-g")
    PROJECT_TYPE="graphical"
    copyProjectStruct
    initCommit
    ;;
"-m")
    PROJECT_TYPE="math"
    copyProjectStruct
    initCommit
    ;;
"-h")
    help
    end
    ;;
"-b")
    updateLib
    end
    ;;
"-p")
    initCommit
    end
    ;;
*)
    echo "Unknown argument. See aps -h for help"
    echo "[$HOURS]\tERROR: Unknown Argument." >>$LOG_PATH
    end
    ;;
esac
end