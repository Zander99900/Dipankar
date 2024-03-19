# Steps to Configure Django
## Install Python 
Use the following link to Download Latest Version of Python :
[Official Python Website](https://www.python.org/downloads/) \
Or Download Python From Microsoft Store

## Setup New Environment
After Successful Installation of Python Go to the directory where You want to setup virtual Python Environment. \
Use the following commands in terminal: \
Windows:
### `py -m venv myworld`

Unix/MacOS:
### `python -m venv myworld`

Then you have to activate the environment, by typing this command:

Windows: \
for cmd :
### `myworld\Scripts\activate.bat`
for powershell : 
### `myworld\Scripts\activate.ps1`

If SetExecutionPolicy error comes i.e., \
Set-ExecutionPolicy : Windows PowerShell updated your execution policy successfully, but the setting is overridden by
a policy defined at a more specific scope.  Due to the override, your shell will retain its current effective
execution policy of RemoteSigned. Type "Get-ExecutionPolicy -List" to view your execution policy settings. For more
information please see "Get-Help Set-ExecutionPolicy".
At line:1 char:46
 ...  -ne 'AllSigned') { Set-ExecutionPolicy -Scope Process Bypass }; & "\ ...
                         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    + CategoryInfo          : PermissionDenied: (:) [Set-ExecutionPolicy], SecurityException
    + FullyQualifiedErrorId : ExecutionPolicyOverride,Microsoft.PowerShell.Commands.SetExecutionPolicyCommand

then use:
### `Set-ExecutionPolicy -Scope CurrentUser RemoteSigned -Force`


Unix/MacOS:
### `source myworld/bin/activate`

## Install Django

After new environment setup, run the command \
Linux / macOS:

### `python -m pip install Django==5.0.3`

Windows:

### `py -m pip install Django==5.0.3`

## Creating 1st Django App

Use the following command to check where django is installed or not
### `django-admin`

if the command returns a set of other commands then it is working. Proceed with next commands

### `django-admin startproject (projectname)`

navigate to one folder inside your django project using CD Command and then use the command \

### `python manage.py runserver`