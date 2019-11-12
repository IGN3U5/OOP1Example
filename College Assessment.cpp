#include <iostream>
#include <vector>
#include <string>
#include "conio.h"

using namespace std;


class clsTeam
{
private:
	string m_sTeamName;
	int m_iNumberOfTeamMembers;
	double m_dTeamBudget;
public:
	void set_TeamName(string);
	void set_NumberOfTeamMembers(int);
	void set_TeamBudget(double);
	string get_TeamName() { return m_sTeamName; }
	int get_NumberOfTeamMembers() { return m_iNumberOfTeamMembers; }
	double get_TeamBudget() { return m_dTeamBudget; }
};

void clsTeam::set_TeamName(string sTeamName)
{
	m_sTeamName = sTeamName;
}

void clsTeam::set_NumberOfTeamMembers(int iNumberOfTeamMembers)
{
	m_iNumberOfTeamMembers = iNumberOfTeamMembers;
}

void clsTeam::set_TeamBudget(double dTeamBudget)
{
	m_dTeamBudget = dTeamBudget;
}

class clsRunner
{
private:
	string m_sCompetitorName;
	string m_sCompetitorType;
	int m_iMinLengthOfContract;
	int m_iMaxLengthOfContract;
	int m_iMinTeamMembers;
	double m_dMaintanencePerc;
	double m_dInitialCost;
	double m_dMinTeamBudget;
public:
	void set_CompetitorName(string);
	void set_CompetitorType(string);
	void set_MinLengthOfContract(int);
	void set_MaxLengthOfContract(int);
	void set_MinTeamMembers(int);
	void set_MaintanencePercentage(double);
	void set_InitialCost(double);
	void set_MinTeamBudget(double);
	string get_CompetitorName() { return m_sCompetitorName; }
	string get_CompetitorType() { return m_sCompetitorType; }
	int get_MinLengthOfContract() { return m_iMinLengthOfContract; }
	int get_MaxLengthOfContract() { return m_iMaxLengthOfContract; }
	int get_MinTeamMembers() { return m_iMinTeamMembers; }
	double get_MaintanencePercentage() { return m_dMaintanencePerc; }
	double get_InitialCost() { return m_dInitialCost; }
	double get_MinTeamBudget() { return m_dMinTeamBudget; }
};

void clsRunner::set_CompetitorName(string sCompetitorName)
{
	m_sCompetitorName = sCompetitorName;
}

void clsRunner::set_CompetitorType(string sCompetitorType)
{
	m_sCompetitorType = sCompetitorType;
}

void clsRunner::set_MinLengthOfContract(int iMinLength)
{
	m_iMinLengthOfContract = iMinLength;
}

void clsRunner::set_MaxLengthOfContract(int iMaxLength)
{
	m_iMaxLengthOfContract = iMaxLength;
}

void clsRunner::set_MinTeamMembers(int iMinTeamMembers)
{
	m_iMinTeamMembers = iMinTeamMembers;
}

void clsRunner::set_MaintanencePercentage(double dMainPerc)
{
	m_dMaintanencePerc = dMainPerc;
}

void clsRunner::set_InitialCost(double dInitialCost)
{
	m_dInitialCost = dInitialCost;
}

void clsRunner::set_MinTeamBudget(double dMinTeamBudget)
{
	m_dMinTeamBudget = dMinTeamBudget;
}

clsTeam registerTeam()
{
	system("CLS"); //Clears the console screen

	//Initialising our variables. (Setting them to nothing so we can write to them in a minute)
	clsTeam objNewTeam = clsTeam(); //Here we are creating an instance of the clsTeam class which is called an object. objMainTeam can now be written to and read from, clsTeam cannot importantly
	string sTeamName = "", sTempNumberOfMembers = "", sTempTeamBudget = ""; //Setting up our temporary string values so we can set up our object further down.
	int iNumberOfMembers = 0;
	double dTeamBudget = 0; //This allows us to store decimal values which int obviously doesn't

	//Getting user input
	cout << "Please enter a team name: ";
	getline(cin, sTeamName);
	cout << "Please enter the number of competitors currently on your team: ";
	getline(cin, sTempNumberOfMembers); //getline takes the user input and saves it in a string variable
	iNumberOfMembers = stoi(sTempNumberOfMembers); //Here we convert what was in that temporary string variable to an integer
	cout << "Please enter the team budeget: ";
	getline(cin, sTempTeamBudget); //getline takes the user input and saves it in a string variable
	dTeamBudget = stod(sTempTeamBudget); //Here we convert what was in that temprary string varibale to a double

	//Saving the data we have gathered from the user into our object objMainTeam
	objNewTeam.set_TeamName(sTeamName);
	objNewTeam.set_NumberOfTeamMembers(iNumberOfMembers);
	objNewTeam.set_TeamBudget(dTeamBudget);

	//Return the new team object so that we can use it later on and letting the user know it's all worked
	cout << "\nYou have sucessfully created a new team, press any key to return to the main menu...";
	_getch();
	return objNewTeam;
}

void setupRunners(clsRunner objarrRunners[]) //Array doesnt need to be passed as a pointer
{
	//setting up the three runner objects
	clsRunner objFirstRunner = clsRunner();
	objFirstRunner.set_CompetitorName("3KM");
	objFirstRunner.set_CompetitorType("Marathon");
	objFirstRunner.set_InitialCost(40000);
	objFirstRunner.set_MaintanencePercentage(2.8);
	objFirstRunner.set_MinLengthOfContract(7 * 12); //converting from years to months
	objFirstRunner.set_MaxLengthOfContract(8 * 12);
	objFirstRunner.set_MinTeamMembers(21);
	objFirstRunner.set_MinTeamBudget(80000);
	clsRunner objSecondRunner = clsRunner();
	objSecondRunner.set_CompetitorName("800m");
	objSecondRunner.set_CompetitorType("Long Range");
	objSecondRunner.set_InitialCost(12000);
	objSecondRunner.set_MaintanencePercentage(3.9);
	objSecondRunner.set_MinLengthOfContract(3 * 12);
	objSecondRunner.set_MaxLengthOfContract(5 * 12);
	objSecondRunner.set_MinTeamMembers(18);
	objSecondRunner.set_MinTeamBudget(24000);
	clsRunner objThirdRunner = clsRunner();
	objThirdRunner.set_CompetitorName("100m");
	objThirdRunner.set_CompetitorType("Sprint");
	objThirdRunner.set_InitialCost(8000);
	objThirdRunner.set_MaintanencePercentage(29.9);
	objThirdRunner.set_MinLengthOfContract(1 * 12);
	objThirdRunner.set_MaxLengthOfContract(2 * 12);
	objThirdRunner.set_MinTeamMembers(18);
	objThirdRunner.set_MinTeamBudget(10000);

	//saving the three runner objects to the array
	objarrRunners[0] = objFirstRunner;
	objarrRunners[1] = objSecondRunner;
	objarrRunners[2] = objThirdRunner;
}

void mainMenu(clsTeam* objTeam, clsRunner objarrRunners[], const int* iRunnerArraySize)
{
	string sChoice = "", sGetTeam = "", sContractLength = "";
	int iSelection = 0, iChoice = 0, iContractLength = 0;;
	bool bTeamElegibilityCheck = false;
	while (!bTeamElegibilityCheck)
	{
		system("CLS"); //Clears the console screen
		cout << "Welcome " << objTeam->get_TeamName() << "\n\n";
		cout << "Please select one of the runners below:\n";
		for (int iRunnerCount = 0; iRunnerCount < *iRunnerArraySize; iRunnerCount++)
		{
			cout << iRunnerCount + 1 << " - " << objarrRunners[iRunnerCount].get_CompetitorName() << "\n";
		}
		getline(cin, sChoice);
		iChoice = stoi(sChoice) - 1;
		cout << "\nYou have chosen " << objarrRunners[iChoice].get_CompetitorName() << "\n";
		if (objarrRunners[iChoice].get_MinTeamMembers() <= objTeam->get_NumberOfTeamMembers() && objarrRunners[iChoice].get_MinTeamBudget() <= objTeam->get_TeamBudget())
		{
			cout << "Your team has passed the elegibilty checks for adding this runner to your team\n";
			cout << "Here is some more information about them\n\n";
			cout << "Their competitor type is " << objarrRunners[iChoice].get_CompetitorType() << "\n";
			cout << "Their contract length is between " << objarrRunners[iChoice].get_MinLengthOfContract() / 12 << " - " << objarrRunners[iChoice].get_MaxLengthOfContract() / 12  << " years \n";
			cout << "Their maintanence increase each year is " << objarrRunners[iChoice].get_MaintanencePercentage() << "%\n";
			cout << "Their initial cost is " << char(156) << objarrRunners[iChoice].get_InitialCost() << "\n";
			cout << "Would you like to add them (y/n): ";
			getline(cin, sGetTeam);
			if (sGetTeam == "Y" || sGetTeam == "y")
			{
				bTeamElegibilityCheck = true;
				cout << "Please enter your prefered contract length in years: ";
				getline(cin, sContractLength);
				iContractLength = stoi(sContractLength) * 12;
				cout << "\nCongrats! You have just got a new team member! Here is your information on the terms of this contract\n";
				cout << "Competitor name: " << objarrRunners[iChoice].get_CompetitorName();
				cout << "\nInitial Cost of Runner: " << char(156) << objarrRunners[iChoice].get_InitialCost();
				cout << "\nLength of agreed contract: " << iContractLength / 12 << " years";
				cout << "\nCost of maintanence for one year: " << char(156) << objarrRunners[iChoice].get_InitialCost() * ((objarrRunners[iChoice].get_MaintanencePercentage() / 100));
				cout << "\nCost of maintanence for length of contract: " << char(156) << objarrRunners[iChoice].get_InitialCost() * ((objarrRunners[iChoice].get_MaintanencePercentage() / 100)) * (iContractLength / 12);
				cout << "\nTotal payable: " << char(156) << (objarrRunners[iChoice].get_InitialCost() * (((objarrRunners[iChoice].get_MaintanencePercentage() / 100) * (iContractLength / 12)) + 1));
				cout << "\nPress any key to exit...";
			}
			else
			{
				cout << "\nYou have decided not to select this particular runner, please select another from the list...\n";
			}
		}
		else
		{
			cout << "Unfortunately you are not elegible for this runner, please press any button to select another and try again...\n";
			_getch();
		}
	}
}



int main()
{
	clsTeam objMainTeam = clsTeam();
	const int iRunnerArraySize = 3; //Saving this so we can pass the array size between functions. Basically so we can tell how many items are in the array (best practice even though we know its always 3);
	clsRunner objarrRunners[iRunnerArraySize]; //Creating an empty array of runners in preparation for the runner setup
	setupRunners(objarrRunners); //Setting the values for all of the different runners
	cout << "Welcome to Runners-R-Us\n\n";
	cout << "Press any key to go to register a new team...";
	_getch();
	objMainTeam = registerTeam();
	mainMenu(&objMainTeam, objarrRunners, &iRunnerArraySize); //Runs the mainMenu function above.
	_getch();
}

