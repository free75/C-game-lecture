#pragma once

class Publisher
{
public:
	void Send(int frequency);
	void Send(const char* messege);
	void Send(const char* messege, int frequency);
};
