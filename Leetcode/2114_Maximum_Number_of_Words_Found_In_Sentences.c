int mostWordsFound(char **sentences, int sentencesSize) {
    int max_words = 0;

    for (int i = 0; i < sentencesSize; i++) {
        int count = 1;  // at least one word in a sentence

        for (int j = 0; sentences[i][j] != '\0'; j++) {
            if (sentences[i][j] == ' ') {
                count++;
            }
        }

        if (count > max_words) {
            max_words = count;
        }
    }

    return max_words;
}
