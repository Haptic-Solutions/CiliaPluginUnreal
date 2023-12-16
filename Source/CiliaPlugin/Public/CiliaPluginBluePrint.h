// Fill out your copyright notice in the Description page of Project Settings.
#include <fstream>
#include <string>
#include <iostream>
#include <thread>
#pragma once
#include "SmellsList.h"
#include "CiliaGroupsList.h"
#include "PathOfCiliaPlugin.h"
#include "GameFramework/Actor.h"
#include "TCPIPClient.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CiliaPluginBluePrint.generated.h"
UENUM()
enum class FanNumber : uint8
{
	Fan1 = 1, Fan2 = 2, Fan3 = 3, Fan4 = 4, Fan5 = 5, Fan6 = 6
};
UENUM()
enum class LightNumber : uint8
{
	Light1 = 1, Light2 = 2, Light3 = 3, Light4 = 4, Light5 = 5, Light6 = 6
};
const int NUMBEROFPIXELS = 6;
class FBlueprintActionDatabaseRegistrar;
/**
 * 
 */
UCLASS()
class CILIAPLUGIN_API UCiliaPluginBluePrint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
		/**
		* Sends a message to the Cilia SDK setting the value of a specified light to a specified red green blue color.
		* @param LightNumber between 1 and 6 from left to right that the color value will be set on.
		* @param Red value between 0 and 255 to set a lights red brightness to.
		* @param Green value between 0 and 255 to set a lights green brightness to.
		* @param Blue value between 0 and 255 to set a lights blue brightness to.
		*/
		static void Light(LightNumber LightNumber, uint8 Red, uint8 Green, uint8 Blue);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
		/**
		* Sends a message to the Cilia SDK setting the fan speed of a specified fan on all Cilias to a specified speed.
		* @param FanNumber between 1 and 6 that the speed will be set for.
		* @param FanSpeed between 0 and 255 that the fan on each of the Cilias will be set to.
		*/
		static void Fan(FanNumber FanNumber, uint8 FanSpeed);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
		/**
		* Sends a message to the Cilia SDK setting the fan speed of any fan with a specified smell in a specified group of Cilias.
		* @param Smell that we are using to specify which fans we are setting the speed of.
		* @param CiliaGroup that we are setting the fan speeds on.
		* @param FanSpeed between 0 and 255 that the fans will be set to.
		*/
		static void FanSmell(SmellList Smell, CiliaGroupsList CiliaGroup, uint8 FanSpeed);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
		/**
		* Used to clear smell away quickly if needed using fans with no smell.
		* Sends a message to the Cilia SDK to turn on specified fans. Then waits a specified amount of time in seconds before sending another message to turn those fans off.
		* @param TimeInSeconds to wait before turning off fans.
		* @param FanSpeed between 0 and 255 to spin fans to clear smell.
		* @param Fan1 true or false value of if fan 1 is used to clear smell.
		* @param Fan2 true or false value of if fan 1 is used to clear smell.
		* @param Fan3 true or false value of if fan 1 is used to clear smell.
		* @param Fan4 true or false value of if fan 1 is used to clear smell.
		* @param Fan5 true or false value of if fan 1 is used to clear smell.
		* @param Fan6 true or false value of if fan 1 is used to clear smell.
		*/
		static void ClearSmell(uint8 TimeInSeconds, uint8 FanSpeed, bool Fan1, bool Fan2, bool Fan3, bool Fan4, bool Fan5, bool Fan6);
	/**
	* Spawned as a new thread by Clear Smell to turn off fans after a specified period of time.
	* @param TimeInSeconds to wait before turning off fans.
	*/
	static void DelayFanTurnOff(uint8 TimeInSeconds);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
	/**
	* Sends a message to the Cilia SDK to turn on a specified light in a specified Cilia group to a specified red green blue value.
	* @param LightNumber between 1 and 6 from left to right that the color value will be set on.
	* @param Red value between 0 and 255 to set a lights red brightness to.
	* @param Green value between 0 and 255 to set a lights green brightness to.
	* @param Blue value between 0 and 255 to set a lights blue brightness to.
	*/
		static void SurroundLight(CiliaGroupsList CiliaGroup, LightNumber LightNumber, uint8 Red, uint8 Green, uint8 Blue);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
	/**
	* Sends a message to the Cilia SDK to turn on all lights in a specified Cilia group to specified red green blue values.
	* @param Light1Red value between 0 and 255 to set light 1's red brightness to.
	* @param Light1Green value between 0 and 255 to set light 1's green brightness to.
	* @param Light1Blue value between 0 and 255 to set light 1's blue brightness to.
	* @param Light2Red value between 0 and 255 to set light 2's red brightness to.
	* @param Light2Green value between 0 and 255 to set light 2's green brightness to.
	* @param Light2Blue value between 0 and 255 to set light 2's blue brightness to.
	* @param Light3Red value between 0 and 255 to set light 3's red brightness to.
	* @param Light3Green value between 0 and 255 to set light 3's green brightness to.
	* @param Light3Blue value between 0 and 255 to set light 3's blue brightness to.
	* @param Light4Red value between 0 and 255 to set light 4's red brightness to.
	* @param Light4Green value between 0 and 255 to set light 4's green brightness to.
	* @param Light4Blue value between 0 and 255 to set light 4's blue brightness to.
	* @param Light5Red value between 0 and 255 to set light 5's red brightness to.
	* @param Light5Green value between 0 and 255 to set light 5's green brightness to.
	* @param Light5Blue value between 0 and 255 to set light 5's blue brightness to.
	* @param Light6Red value between 0 and 255 to set light 6's red brightness to.
	* @param Light6Green value between 0 and 255 to set light 6's green brightness to.
	* @param Light6Blue value between 0 and 255 to set alight 6's blue brightness to.
	*/
		static void SurroundLights(CiliaGroupsList CiliaGroup, uint8 Light1Red, uint8 Light1Green, uint8 Light1Blue, uint8 Light2Red, uint8 Light2Green, uint8 Light2Blue, uint8 Light3Red, uint8 Light3Green, uint8 Light3Blue, uint8 Light4Red, uint8 Light4Green, uint8 Light4Blue, uint8 Light5Red, uint8 Light5Green, uint8 Light5Blue, uint8 Light6Red, uint8 Light6Green, uint8 Light6Blue);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
	/**
	* Connects the Cilia to the Cilia SDK by TCP/IP at a specified IPAddress and a specified port.
	* Defaults to IP Address 127.0.0.1 (localhost) if invalid IPAddress is used.
	* @param aIPAddress string value of the ipv4 address the Cilia SDK is hosted on.
	* @param Port that the Cilia SDK is hosted on.
	*/
		static void ConnectCilia(FString aIPAddress = "127.0.0.1", int Port = 1995);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
	/**
	* Disconnects the Cilia from the Cilia SDK.
	*/
		static void DisconnectCilia();
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
	/**
	* Sends messages to the Cilia SDK creating of loading a game profile.
	* Also, can localy regenerate the smell and group lists if the path to the plugin is set and the checkbox is set.
	* @param ForceGameProfileUpdate forces the SDK to refresh the Cilia smells to the default smells.
	* @param GameName alphanumeric sting value of the name of the game with no spaces.
	* @param DefaultCiliaGroup the default group that Cilias will be a part of.
	* @param PathOfCiliaPlugin  the path to the Ciia Plugin(only used if regenerating the drop down value for development)
	* @param Smells array of Upper and Lowercase AlphaNonNumeric FStrings naming the smells that the game uses.
	* @param Group array of Upper and Lowercase AlphaNonNumeric FString naming the groups that the Game uses for defining groupings of Cilias.
	* @param RegenerateSmellAndGroupListsDoNotLeaveChecked if checked the plugin regenerates the drop down values for smells and groups based on input arrays.
	* @param Light1Red default value between 0 and 255 to set light 1's red brightness to.
	* @param Light1Green default value between 0 and 255 to set light 1's green brightness to.
	* @param Light1Blue default value between 0 and 255 to set light 1's blue brightness to.
	* @param Light2Red default value between 0 and 255 to set light 2's red brightness to.
	* @param Light2Green default value between 0 and 255 to set light 2's green brightness to.
	* @param Light2Blue default value between 0 and 255 to set light 2's blue brightness to.
	* @param Light3Red default value between 0 and 255 to set light 3's red brightness to.
	* @param Light3Green default value between 0 and 255 to set light 3's green brightness to.
	* @param Light3Blue default value between 0 and 255 to set light 3's blue brightness to.
	* @param Light4Red default value between 0 and 255 to set light 4's red brightness to.
	* @param Light4Green default value between 0 and 255 to set light 4's green brightness to.
	* @param Light4Blue default value between 0 and 255 to set light 4's blue brightness to.
	* @param Light5Red default value between 0 and 255 to set light 5's red brightness to.
	* @param Light5Green default value between 0 and 255 to set light 5's green brightness to.
	* @param Light5Blue default value between 0 and 255 to set light 5's blue brightness to.
	* @param Light6Red default value between 0 and 255 to set light 6's red brightness to.
	* @param Light6Green default value between 0 and 255 to set light 6's green brightness to.
	* @param Light6Blue default value between 0 and 255 to set light 6's blue brightness to.
	*/
	static void CreateGameProfile(bool ForceGameProfileUpdate, FString GameName, CiliaGroupsList DefaultCiliaGroup, uint8 Light1Red, uint8 Light1Green, uint8 Light1Blue, uint8 Light2Red, uint8 Light2Green, uint8 Light2Blue, uint8 Light3Red, uint8 Light3Green, uint8 Light3Blue, uint8 Light4Red, uint8 Light4Green, uint8 Light4Blue, uint8 Light5Red, uint8 Light5Green, uint8 Light5Blue, uint8 Light6Red, uint8 Light6Green, uint8 Light6Blue);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
	/**
	* Regenerates the enumerated types also known as the lists of smells and groups of Cilias based on input FStringArrays.
	* FOR DEVELOPMENT ONLY TURN OFF CHECKBOX IN CREATE GAME PROFILE AFTER GENERATING.
	* @param FString path to CiliaPlugin.
	* @param Smells Fstring array of smells to regenerate the dropdowns (SmellList enum) with.
	* @param Groups Fstring array of smells to regenerate the dropdowns (CiliaGroupsList enum) with.
	*/
	static void RegenerateSmellAndGroupLists(FString PathOfCiliaPlugin, TArray<FString> Smells, TArray<FString> Groups);
	/**
	*Formats light integers into strings with 3 digits for each light.
	*@param aRedIntensity to format.
	*@param aGreenIntensity to format.
	*@param aBlue Intensity to format.
	*@return formatted string.
	*/
	static std::string FormatLightInts(uint8 aRedIntensity, uint8 aGreenIntensity, uint8 aBlueIntensity);
	/**
	*Formats an int into a string with 3 digits. Used for light or fan values.
	*@param aIntensity to format.
	*@return formatted string.
	*/
	static std::string FormatIntensity(uint8 aIntensity);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
	static FString GetSmells();
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
	static FString GetCiliaGroups();
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
	static FString GetPathOfCiliaPlugin();
};

