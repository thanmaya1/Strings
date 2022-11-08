    cnt = (*s != ' ' && *s != 0) ? 1 : 0;
    for (i = 1; s[i] != 0; ++i)
        if (s[i] != ' ')
            cnt = (s[i - 1] == ' ') ? 1 : cnt + 1;
    return cnt;
