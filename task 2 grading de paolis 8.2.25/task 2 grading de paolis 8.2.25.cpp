// task 2 grading de paolis 8.2.25.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>

int main() {
    int score;

    // Prompt user for input
    std::cout << "Enter the grade you scored in the programming class between 0 and 100:  ";
    std::cin >> score;

    // Check if score is within a valid range
    if (score < 0 || score > 100) {
        std::cout << "Invalid score! Please enter a number between 0 and 100." << std::endl;
    }

    else {
        // Determine grade using switch statement
        switch (score / 10) {
        case 10: // 100
        case 9:  // 90-99
        case 8:  // 80-89
            std::cout << "Your grade is A*" << std::endl;
            break;
        case 7:  // 70-79
            std::cout << "Your grade is A" << std::endl;
            break;
        case 6:  // 60-69
            std::cout << "Your grade is B" << std::endl;
            break;
        case 5:  // 50-59
            std::cout << "Your grade is C" << std::endl;
            break;
        case 4:  // 40-49
            std::cout << "Your grade is D" << std::endl;
            break;
        case 3:  // 30-39
        case 2:  // 20-29
        case 1:  // 10-19
            std::cout << "Your grade is F" << std::endl;
            break;
        case 0:  // 0-9
            std::cout << "Your grade is U" << std::endl;
            break;
        }
    }

    return 0;
}



// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
