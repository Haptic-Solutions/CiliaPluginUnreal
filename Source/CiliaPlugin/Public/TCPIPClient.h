// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>
#include <string.h>
#include "Networking.h"
#include "Sockets.h"
#include "CoreMinimal.h"

class CILIAPLUGIN_API TCPIPClient
{
public:
	/**
	*Default Constructor.
	*/
	TCPIPClient();
	/**
	*Default Destructor.
	*/
	~TCPIPClient();
	/**
	* Connects the Cilia to the Cilia SDK by TCP/IP at a specified IPAddress and a specified port.
	* @param aIPAddress FIPv4Address value of the ipv4 address the Cilia SDK is hosted on.
	* @param Port uint16 value of the port that the Cilia SDK is hosted on.
	*/
	static void ConnectCilia(FIPv4Address aIPv4Address, uint16 aPort);
	/**
	* Disconnects the Cilia from the Cilia SDK.
	*/
	static void DisconnectCilia();
	/**
	*Sends a provided string to the Cilia SDK.
	* @param aStringToSend to the SDK.
	*/
	static void SendString(std::string aStringToSend);
private:
	static FSocket* mSocket;
	static bool mConnected;
};
