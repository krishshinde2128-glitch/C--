// Dublicate checker
            bool exists = false;
            string checkID, checkT, checkA;
            int checkS;
            ifstream checkFile("library.txt");
            while (checkFile >> checkID >> checkT >> checkA >> checkS) {
                if (checkID == b.id) {
                    exists = true;
                    break;