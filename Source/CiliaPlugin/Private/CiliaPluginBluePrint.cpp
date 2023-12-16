// Fill out your copyright notice in the Description page of Project Settings.
#include "CiliaPluginBluePrint.h"

#define RIPPLEFRAMES 20

float oldDistance = 0;

void UCiliaPluginBluePrint::Fan(FanNumber FanNumber, uint8 FanSpeed)
{
	std::string FanNumberString;
	FanNumberString = std::to_string((uint8)FanNumber);

	std::string FanSpeedString = FormatIntensity(FanSpeed);

	std::string stringForCilia = "[F" + FanNumberString + FanSpeedString + "]";
	TCPIPClient::SendString(stringForCilia);
	//send(CiliaSocket, stringForCilia.c_str(), stringForCilia.size() + 1, 0);
	return;
}

void UCiliaPluginBluePrint::FanSmell(SmellList Smell, CiliaGroupsList CiliaGroup, uint8 FanSpeed)
{
	std::string SmellString = std::string(TCHAR_TO_UTF8(*SmellsToStrings.at(Smell)));

	std::string CiliaPositionString;
	if (CiliaGroup == CiliaGroupsList::All)
	{
		CiliaPositionString = std::string("All");
	}
	else
	{
		CiliaPositionString = "G<" + std::to_string((uint8)CiliaGroup) + ">";
	}
	std::string FanSpeedString = FormatIntensity(FanSpeed);

	std::string stringForCilia = "[" + CiliaPositionString + "F," + SmellString + "," + FanSpeedString + "]";
	TCPIPClient::SendString(stringForCilia);
	//send(CiliaSocket, stringForCilia.c_str(), stringForCilia.size() + 1, 0);
	return;
}

void UCiliaPluginBluePrint::ClearSmell(uint8 TimeInSeconds, uint8 FanSpeed, bool Fan1, bool Fan2, bool Fan3, bool Fan4, bool Fan5, bool Fan6)
{
	if (Fan1 == true)
		Fan(FanNumber::Fan1, FanSpeed);
	else
		Fan(FanNumber::Fan1, 0);
	if (Fan2 == true)
		Fan(FanNumber::Fan2, FanSpeed);
	else
		Fan(FanNumber::Fan2, 0);
	if (Fan3 == true)
		Fan(FanNumber::Fan3, FanSpeed);
	else
		Fan(FanNumber::Fan3, 0);
	if (Fan4 == true)
		Fan(FanNumber::Fan4, FanSpeed);
	else
		Fan(FanNumber::Fan4, 0);
	if (Fan5 == true)
		Fan(FanNumber::Fan5, FanSpeed);
	else
		Fan(FanNumber::Fan5, 0);
	if (Fan6 == true)
		Fan(FanNumber::Fan6, FanSpeed);
	else
		Fan(FanNumber::Fan6, 0);
	//UKismetSystemLibrary::Delay(WorldContextObject, TimeInSeconds, FLatentActionInformation);
	std::thread(DelayFanTurnOff, TimeInSeconds).detach();
	//test.join();
	return;
}
void UCiliaPluginBluePrint::DelayFanTurnOff(uint8 TimeInSeconds)
{
	std::this_thread::sleep_for(std::chrono::seconds((int)TimeInSeconds));
	Fan(FanNumber::Fan1, 0);
	Fan(FanNumber::Fan2, 0);
	Fan(FanNumber::Fan3, 0);
	Fan(FanNumber::Fan4, 0);
	Fan(FanNumber::Fan5, 0);
	Fan(FanNumber::Fan6, 0);
}

void UCiliaPluginBluePrint::Light(LightNumber LightNumber, uint8 Red, uint8 Green, uint8 Blue)
{
	std::string LightNumberString;
	LightNumberString = std::to_string((uint8)LightNumber);

	std::string redString = FormatIntensity(Red);

	std::string greenString = FormatIntensity(Green);

	std::string blueString = FormatIntensity(Blue);

	std::string stringForCilia = "[N" + LightNumberString + redString + greenString + blueString + "]";

	TCPIPClient::SendString(stringForCilia);
	//send(CiliaSocket, stringForCilia.c_str(), stringForCilia.size() + 1, 0);
	return;
}

void UCiliaPluginBluePrint::SurroundLights(CiliaGroupsList CiliaGroup, uint8 Light1Red, uint8 Light1Green, uint8 Light1Blue, uint8 Light2Red, uint8 Light2Green, uint8 Light2Blue, uint8 Light3Red, uint8 Light3Green, uint8 Light3Blue, uint8 Light4Red, uint8 Light4Green, uint8 Light4Blue, uint8 Light5Red, uint8 Light5Green, uint8 Light5Blue, uint8 Light6Red, uint8 Light6Green, uint8 Light6Blue)
{
	SurroundLight(CiliaGroup, LightNumber::Light1, Light1Red, Light1Green, Light1Blue);
	SurroundLight(CiliaGroup, LightNumber::Light2, Light2Red, Light2Green, Light2Blue);
	SurroundLight(CiliaGroup, LightNumber::Light3, Light3Red, Light3Green, Light3Blue);
	SurroundLight(CiliaGroup, LightNumber::Light4, Light4Red, Light4Green, Light4Blue);
	SurroundLight(CiliaGroup, LightNumber::Light5, Light5Red, Light5Green, Light5Blue);
	SurroundLight(CiliaGroup, LightNumber::Light6, Light6Red, Light6Green, Light6Blue);
}

void UCiliaPluginBluePrint::SurroundLight(CiliaGroupsList CiliaGroup, LightNumber LightNumber, uint8 Red, uint8 Green, uint8 Blue)
{
	std::string CiliaPositionString;
	if (CiliaGroup == CiliaGroupsList::All)
	{
		CiliaPositionString = std::string("All");
	}
	else
	{
		CiliaPositionString = "G<" + std::to_string((uint8)CiliaGroup) + ">";
	}

	std::string LightNumberString;
	LightNumberString = std::to_string((uint8)LightNumber);

	std::string redString = FormatIntensity(Red);

	std::string greenString = FormatIntensity(Green);

	std::string blueString = FormatIntensity(Blue);

	std::string stringForCilia = "[" + CiliaPositionString + ",N" + LightNumberString + redString + greenString + blueString + "]";

	TCPIPClient::SendString(stringForCilia);
	//send(CiliaSocket, stringForCilia.c_str(), stringForCilia.size() + 1, 0);
	return;
}

void UCiliaPluginBluePrint::ConnectCilia(FString aIPAddress, int Port)
{
	TArray<FString> ipaddress;
	FIPv4Address aIPv4Address = FIPv4Address(127, 0, 0, 1);
	int numberOfSubStrings = aIPAddress.ParseIntoArray(ipaddress, TEXT("."), true);
	if (numberOfSubStrings == 4)
	{
		aIPv4Address = FIPv4Address((uint8)FCString::Atoi(*ipaddress[0]), (uint8)FCString::Atoi(*ipaddress[1]), (uint8)FCString::Atoi(*ipaddress[2]), (uint8)FCString::Atoi(*ipaddress[3]));
	}
	else
	{
		aIPv4Address = FIPv4Address(127, 0, 0, 1);
	}
	//invalid ports get set to default port. Wish could force uint16 in blueprint
	if ((Port < 0) || (Port > 65535))
	{
		Port = 1995;
	}
	// = aIPAddress.;
	TCPIPClient::ConnectCilia(aIPv4Address, (uint16)Port);
	return;
}

void UCiliaPluginBluePrint::DisconnectCilia()
{
	TCPIPClient::DisconnectCilia();
	return;
}

void UCiliaPluginBluePrint::CreateGameProfile(bool ForceGameProfileUpdate, FString GameName, CiliaGroupsList DefaultCiliaGroup, uint8 Light1Red, uint8 Light1Green, uint8 Light1Blue, uint8 Light2Red, uint8 Light2Green, uint8 Light2Blue, uint8 Light3Red, uint8 Light3Green, uint8 Light3Blue, uint8 Light4Red, uint8 Light4Green, uint8 Light4Blue, uint8 Light5Red, uint8 Light5Green, uint8 Light5Blue, uint8 Light6Red, uint8 Light6Green, uint8 Light6Blue)
{
	std::string smellsForLibraryMessage = "[!#AddToLibrary|";
	std::string GameNameString(TCHAR_TO_UTF8(*GameName));
	std::string gameProfileMessage = "[!#LoadProfile|" + GameNameString + "," + std::to_string((int)DefaultCiliaGroup) + ",";
	if(ForceGameProfileUpdate)
		gameProfileMessage = "[!#LoadProfileForce|" + GameNameString + "," + std::to_string((int)DefaultCiliaGroup) + ",";
	std::string iSmell0(TCHAR_TO_UTF8(*mSmellsStringList[0]));
	smellsForLibraryMessage += iSmell0;
	for (int i = 1; i < mSmellsStringList.Num(); i++)
	{
		std::string iSmell(TCHAR_TO_UTF8(*mSmellsStringList[i]));
		smellsForLibraryMessage += "," + iSmell;
	}
	for (int i = 0; i < 6; i++)
	{
		std::string iSmell(TCHAR_TO_UTF8(*mSmellsStringList[i]));
		gameProfileMessage += iSmell + ",";
	}
	gameProfileMessage += FormatLightInts(Light1Red, Light1Green, Light1Blue) + ",";
	gameProfileMessage += FormatLightInts(Light2Red, Light2Green, Light2Blue) + ",";
	gameProfileMessage += FormatLightInts(Light3Red, Light3Green, Light3Blue) + ",";
	gameProfileMessage += FormatLightInts(Light4Red, Light4Green, Light4Blue) + ",";
	gameProfileMessage += FormatLightInts(Light5Red, Light5Green, Light5Blue) + ",";
	gameProfileMessage += FormatLightInts(Light6Red, Light6Green, Light6Blue) + ",";
	smellsForLibraryMessage += "]";

	for (int i = 0; i < mGroupsStringList.Num(); i++)
	{
		std::string iGroups(TCHAR_TO_UTF8(*mGroupsStringList[i]));
		if(i != (mGroupsStringList.Num()-1))
			gameProfileMessage += iGroups + ",";
	}
	gameProfileMessage += "]";
	TCPIPClient::SendString(smellsForLibraryMessage);
	TCPIPClient::SendString(gameProfileMessage);
	return;
}

void UCiliaPluginBluePrint::RegenerateSmellAndGroupLists(FString PathOfCiliaPlugin, TArray<FString> Smells, TArray<FString> Groups)
{
	std::string ciliapluginpath(TCHAR_TO_UTF8(*PathOfCiliaPlugin));

	std::ofstream pathOfCiliaPluginFile(ciliapluginpath + "/Source/CiliaPlugin/Public/PathOfCiliaPlugin.h");
	pathOfCiliaPluginFile << "const FString mPathOfCiliaPlugin = \"" << TCHAR_TO_UTF8(*PathOfCiliaPlugin) << "\";";
	pathOfCiliaPluginFile.close();

	std::ofstream ciliaSmellsLibraryFile(ciliapluginpath + "/Source/CiliaPlugin/Public/SmellsList.h");
	ciliaSmellsLibraryFile << "#include <unordered_map>\n";
	ciliaSmellsLibraryFile << "#include \"CoreMinimal.h\"\n#include \"UObject/ObjectMacros.h\"\n#pragma once\n";
	ciliaSmellsLibraryFile << "UENUM()\nenum class SmellList : uint8\n{\n\t";
	std::string smell0(TCHAR_TO_UTF8(*Smells[0]));
	ciliaSmellsLibraryFile << smell0;
	for (int i = 1; i < Smells.Num(); i++)
	{
		std::string smell(TCHAR_TO_UTF8(*Smells[i]));
		ciliaSmellsLibraryFile << "," << smell;
	}
	ciliaSmellsLibraryFile << "\n};\n";
	ciliaSmellsLibraryFile << "const TArray<FString> mSmellsStringList = { ";
	std::string smell0c(TCHAR_TO_UTF8(*Smells[0]));
	ciliaSmellsLibraryFile << "\"" << smell0c << "\"";
	for (int i = 1; i < Smells.Num(); i++)
	{
		std::string smell(TCHAR_TO_UTF8(*Smells[i]));
		ciliaSmellsLibraryFile << ",\"" << smell << "\"";
	}
	ciliaSmellsLibraryFile << "};\n";

	ciliaSmellsLibraryFile << "const std::unordered_map<SmellList,FString> SmellsToStrings =\n";
	ciliaSmellsLibraryFile << "{";
	std::string smell0b(TCHAR_TO_UTF8(*Smells[0]));
	ciliaSmellsLibraryFile << "\n\t{\n\t\tSmellList::" << smell0b << ",\n\t\t\"" << smell0b << "\"\n\t}";
	for (int i = 1; i < Smells.Num(); i++)
	{
		std::string smell(TCHAR_TO_UTF8(*Smells[i]));
		ciliaSmellsLibraryFile << ",\n\t{\n\t\tSmellList::" << smell << ",\n\t\t\"" << smell << "\"\n\t}";
	}
	ciliaSmellsLibraryFile << "\n};";
	ciliaSmellsLibraryFile.close();

	std::ofstream ciliaGroupsLibraryFile(ciliapluginpath + "/Source/CiliaPlugin/Public/CiliaGroupsList.h");
	ciliaGroupsLibraryFile << "#include \"CoreMinimal.h\"\n#include \"UObject/ObjectMacros.h\"\n#pragma once\n";
	ciliaGroupsLibraryFile << "UENUM()\nenum class CiliaGroupsList : uint8\n{\n\t";
	for (int i = 0; i < Groups.Num(); i++)
	{
		std::string group(TCHAR_TO_UTF8(*Groups[i]));
		ciliaGroupsLibraryFile << group << ",";
	}
	ciliaGroupsLibraryFile << "All";
	ciliaGroupsLibraryFile << "\n};\n";

	ciliaGroupsLibraryFile << "const TArray<FString> mGroupsStringList = { ";
	std::string group0c(TCHAR_TO_UTF8(*Groups[0]));
	ciliaGroupsLibraryFile << "\"" << group0c << "\"";
	for (int i = 1; i < Groups.Num(); i++)
	{
		std::string group(TCHAR_TO_UTF8(*Groups[i]));
		ciliaGroupsLibraryFile << ",\"" << group << "\"";
	}
	ciliaGroupsLibraryFile << "};\n";

	ciliaGroupsLibraryFile.close();
}
std::string UCiliaPluginBluePrint::FormatLightInts(uint8 aRedIntensity, uint8 aGreenIntensity, uint8 aBlueIntensity)
{
	std::string lightString = FormatIntensity(aRedIntensity) + FormatIntensity(aGreenIntensity) + FormatIntensity(aBlueIntensity);
	return lightString;
}
std::string UCiliaPluginBluePrint::FormatIntensity(uint8 aIntensity)
{
	std::string intensityString;
	if (aIntensity < 10)
		intensityString = "00" + std::to_string(aIntensity);
	else if (aIntensity < 100)
		intensityString = "0" + std::to_string(aIntensity);
	else
		intensityString = std::to_string(aIntensity);
	return intensityString;
}

FString UCiliaPluginBluePrint::GetSmells()
{
	FString mSmellsStringListToReturn = mSmellsStringList[0];
	for (int i = 1; i < mSmellsStringList.Num(); i++)
	{
		mSmellsStringListToReturn += "\r\n" + mSmellsStringList[i];
	}
	return mSmellsStringListToReturn;
}

FString UCiliaPluginBluePrint::GetCiliaGroups()
{
	FString mGroupsStringListToReturn = mGroupsStringList[0];
	for (int i = 1; i < mGroupsStringList.Num(); i++)
	{
		mGroupsStringListToReturn += "\r\n" + mGroupsStringList[i];
	}
	return mGroupsStringListToReturn;
}

FString UCiliaPluginBluePrint::GetPathOfCiliaPlugin()
{
	return mPathOfCiliaPlugin;
}