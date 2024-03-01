
{
    "version": "2.0.0",
    "tasks": [
      {
        "label": "Compile and run",
        "type": "shell",
        "command": "",
        "args": [
          "copy",
          "\"${file}\"",
          "${workspaceFolder}\\jspwTest.cpp",
          "&&",
          "g++",
          "jspwTest.cpp",
          "-o",
          "jspwTest",
          "&&",
          "jspwTest",
          "<",
          "input.txt",
          ">",
          "output.txt",
          "&&",
          "del",
          "jspwTest.exe",
          "&&",
          "del",
          "jspwTest.cpp"
        ],
        "presentation": {
          "reveal": "never"
        },
        "group": {
          "kind": "build",
          "isDefault": true,
        },
        "problemMatcher": {
          "owner": "cpp",
          "fileLocation": [
            "relative",
            "${workspaceRoot}"
          ],
          "pattern": {
            "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning|error):\\s+(.*)$",
            "file": 1,
            "line": 2,
            "column": 3,
            "severity": 4,
            "message": 5
          }
        }
      }
    ]
  }