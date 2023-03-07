#This is not written in python, instead it is used for joint projects to ensure that all the coders use same version of modules & packages and there will not be prblm in project due to version mismatch, in order to do this, create a folder dedicated to project and open cmd/powershell and use command python-venv % python -m venv <foldername> and then activate virtual environmnet using python -venv % source <foldername>\Scripts\activate.bs1
#then use nrml module installation commands(pip install pandas) starting with "python -venv %"

#Simply write deactivate in order to deactivate the environment and exit() to quit

#If we are using a bunch of packages and we don't remember all versions of all packages then we use pip freeze > requirements.txt and store all the versions in a text file, and we can also share to other members of project and they can jointly install all the same versions of project by using pip install -r  requirements.txt