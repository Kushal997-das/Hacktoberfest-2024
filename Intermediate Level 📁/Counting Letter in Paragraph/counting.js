function alphabetcount(masuk) {
    var huruf = 0;
    var alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    var hitung = alphabet.split("");
    for (var i=0; i<masuk.length;i++) {
        if (hitung.indexOf(masuk[i]) > -1) {
            huruf = huruf + 1;
        }
    }
    return huruf;
}
console.log(alphabetcount("Toshinou Kyouko is the founder of the amusement club. Goes so wild that no one can keep up with her, but it's not as if anyone even tries in the first place, so it's ultimately no big deal. She is actually an otaku who creates her own doujinshi of Mirakurun, an anime character in Yuru Yuri."));
// result : 228
