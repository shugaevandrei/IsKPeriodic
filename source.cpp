int IskPeriodic(std::string str, int n) {
	std::string str0, str1;
	for (int i = 0; i < str.length(); ++i) {
		str0.push_back(str[i]);
		str1.clear();

		for (int j = i + 1; j < str0.size() + i + 1; ++j) {
			str1.push_back(str[j]);
		}
		if (str0 == str1) {
			return str0.size() == n;
		}
	}
	return 0;
}