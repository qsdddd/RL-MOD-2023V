#pragma once
#include "../../pch.hpp"

// Helper functions for formatting streams and strings.
namespace Format
{
	bool IsStringNumber(std::string_view str);
	bool IsStringFloat(std::string_view str);
	void EraseAllChars(std::string& str, char character);
	std::string RemoveAllChars(std::string str, char character);
	void Empty(std::ostringstream& stream);
	void FillRight(std::ostringstream& stream, char fill, uint64_t width);
	void FillLeft(std::ostringstream& stream, char fill, uint64_t width);
	void FillRight(std::ofstream& stream, char fill, uint64_t width);
	void FillLeft(std::ofstream& stream, char fill, uint64_t width);
	std::string Hex(uintptr_t address, uint64_t width);
	std::string Decimal(uintptr_t address, uint64_t width);
	std::string Precision(float value, uint64_t precision);
	std::vector<std::string> SplitArguments(const std::string& arguments);
	std::string ParseArguments(std::string arguments);
}