//Text Adventure Project

#include <iostream>

int main() {

    int rival_score = 70;
    int user_score = 0;
    int answer1, answer2, answer3, answer4;

    /*
    Beginning
    */
    std::cout << "=========================\n";
    std::cout << "Who's House?\n";
    std::cout << "=========================\n\n";
    std::cout << "Hello and welcome, you disgusting specimen of a human being!\n";
    std::cout << "You are a contestant on 'Who's House?' You will be asked a series of questions\n";
    std::cout << "and you will need to answer enough of these correctly to crush your rival, Dr. Foreman!\n";
    std::cout << "All the questions will focus on how well you know me, Dr. Gregory House from the hit TV show 'House'.\n";
    std::cout << "So, now that we're all up to speed...\n\n";

    /*
    1st Question
    */
    std::cout << "Let's get started!\n\n";
 
    std::cout << "Q1) Who is House's best friend?\n";
    std::cout << "  1) Thirteen\n";
    std::cout << "  2) Dr. Wilson\n";
    std::cout << "  3) Dr. Cuddy\n";
    std::cout << "  4) Dr. Foreman\n\n";
    std::cout << "Answer: ";
    std::cin >> answer1;

    //Confirms entry is valid/invalid   
    while (answer1 > 4 || answer1 < 1) {
        std::cout << "Invalid Entry. Try again you moron!\n";
        std::cout << "Answer: ";
        std::cin >> answer1;
    };
    
    //Function to get 1st answer and add to score 
    if (answer1 == 2) {
        std::cout << "Correct! (But House would never admit that)\n\n";
        user_score += 25;
    } else if (answer1 == 1 || answer1 == 3) {
        std::cout << "Partial credit! *but House is rolling his eyes at you o_o*\n\n";
        user_score += 10;
    } else {
        std::cout << "Incorrect! Let's get a brain biopsy to confirm.\n\n";
    };

    /*
    Question 2
    */
    std::cout << "Q2) Who does House have the most sexual tension with?\n";
    std::cout << "  1) Dr. Chase\n";
    std::cout << "  2) Dr. Taub\n";
    std::cout << "  3) Dr. Cuddy\n";
    std::cout << "  4) Vicodin\n\n";
    std::cout << "Answer: ";
    std::cin >> answer2;

    //Confirms entry is valid/invalid   
    while (answer2 > 4 || answer2 < 1) {
        std::cout << "Invalid Entry. Try again you moron!\n";
        std::cout << "Answer: ";
        std::cin >> answer2;
    };

    //Function to get 2nd answer and add to score 
    if (answer2 == 3) {
        std::cout << "Correct! Let's get a full body scan going.\n\n";
        user_score += 25;
    } else if (answer2 == 4) {
        std::cout << "Partial credit! *House pops one back*\n\n";
        user_score += 10;
    } else {
        std::cout << "Incorrect! We're gonna need a crash cart in here!\n\n";
    };

    /*
    Question 3
    */
    std::cout << "Q3) Which literary character am I, some would arguably say, loosely based on?\n";
    std::cout << "  1) Macbeth\n";
    std::cout << "  2) Sherlock Holmes\n";
    std::cout << "  3) Gandalf\n";
    std::cout << "  4) Robinson Crusoe\n\n";
    std::cout << "Answer: ";
    std::cin >> answer3;

    //Confirms entry is valid/invalid   
    while (answer3 > 4 || answer3 < 1) {
        std::cout << "Invalid Entry. Try again dummy!\n";
        std::cout << "Answer: ";
        std::cin >> answer3;
    };

    //Function to get 2nd answer and add to score 
    if (answer3 == 2) {
        std::cout << "Elementary. (House is now wearing a deerstalker hat and smoking a pipe)\n\n";
        user_score += 25;
    } else {
        std::cout << "Incorrect! The chart indicates a lack of intelligence.\n\n";
    };

    /*
    Question 4
    */
    std::cout << "Q3) What caused my leg injury?\n";
    std::cout << "  1) Motorcycle accident\n";
    std::cout << "  2) Infarction while playing golf\n";
    std::cout << "  3) Muscle Necrosis\n";
    std::cout << "  4) Botched Surgery\n\n";
    std::cout << "Answer: ";
    std::cin >> answer4;

    //Confirms entry is valid/invalid   
    while (answer4 > 4 || answer4 < 1) {
       std::cout << "Invalid Entry. Try again dummy!\n";
       std::cout << "Answer: ";
       std::cin >> answer4;
    };

    //Function to get 4th answer and add to score 
    if (answer4 == 2) {
       std::cout << "Yeah, ok, whatever...moving on!\n\n";
       user_score += 25;
    } else if (answer4 == 4 || answer4 == 3) {
        std::cout << "Mmmm...close enough...anyway!\n\n";
        user_score += 20;
    } else {
       std::cout << "No...but it'd be cool right?\n\n";
    };

    /*
    Ending
    */
    std::cout << "We've finally arrived! Let's see who knows me, Dr. House from the hit TV show 'House', the best.\n\n";
    std::cout << "*drumroll*\n\n";

    if (user_score > rival_score) {
        std::cout << "Congratulations! You don't win anything, but at least you have the satisfaction of beating Foreman.\n\n";
        std::cout << "   .oooooo..o                       oooo              o8o      .\n";         
        std::cout << "  d8P'    `Y8                       `888              `''    .o8\n";         
        std::cout << "  Y88bo.      oooo  oooo   .ooooo.   888  oooo       oooo  .o888oo\n";       
        std::cout << "   `'Y8888o.  `888  `888  d88' `'Y8  888 .8P'        `888    888\n";         
        std::cout << "       `'Y88b  888   888  888        888888.          888    888\n";         
        std::cout << "  oo     .d8P  888   888  888   .o8  888 `88b.        888    888 .\n";       
        std::cout << "  8''88888P'   `V88V'V8P' `Y8bod8P' o888o o888o      o888o   '888'\n\n";       
                                                                       
                                                                       
                                                                       
        std::cout << "  oooooooooooo\n";                                                                     
        std::cout << "  `888'     `8      \n";                                                               
        std::cout << "   888          .ooooo.  oooo d8b  .ooooo.  ooo. .oo.  .oo.    .oooo.   ooo. .oo.\n";  
        std::cout << "   888oooo8    d88' `88b `888''8P d88' `88b `888P'Y88bP'Y88b  `P  )88b  `888P'Y88b \n";
        std::cout << "   888    '    888   888  888     888ooo888  888   888   888   .oP'888   888   888\n"; 
        std::cout << "   888         888   888  888     888    .o  888   888   888  d8(  888   888   888 \n";
        std::cout << "  o888o        `Y8bod8P' d888b    `Y8bod8P' o888o o888o o888o `Y888""8o o888o o888o\n";
    } else if (user_score == rival_score) {
        std::cout << "Wow a tie! I didn't think anyone could be as stupid as Foreman!\n\n";
        std::cout << "   .oooooo..o                       oooo              o8o      .\n";         
        std::cout << "  d8P'    `Y8                       `888              `''    .o8\n";         
        std::cout << "  Y88bo.      oooo  oooo   .ooooo.   888  oooo       oooo  .o888oo\n";       
        std::cout << "   `'Y8888o.  `888  `888  d88' `'Y8  888 .8P'        `888    888\n";         
        std::cout << "       `'Y88b  888   888  888        888888.          888    888\n";         
        std::cout << "  oo     .d8P  888   888  888   .o8  888 `88b.        888    888 .\n";       
        std::cout << "  8''88888P'   `V88V'V8P' `Y8bod8P' o888o o888o      o888o   '888'\n\n";       
                                                                       
                                                                       
                                                                       
        std::cout << "  oooooooooooo\n";                                                                     
        std::cout << "  `888'     `8      \n";                                                               
        std::cout << "   888          .ooooo.  oooo d8b  .ooooo.  ooo. .oo.  .oo.    .oooo.   ooo. .oo.\n";  
        std::cout << "   888oooo8    d88' `88b `888''8P d88' `88b `888P'Y88bP'Y88b  `P  )88b  `888P'Y88b \n";
        std::cout << "   888    '    888   888  888     888ooo888  888   888   888   .oP'888   888   888\n"; 
        std::cout << "   888         888   888  888     888    .o  888   888   888  d8(  888   888   888 \n";
        std::cout << "  o888o        `Y8bod8P' d888b    `Y8bod8P' o888o o888o o888o `Y888""8o o888o o888o\n";
    } else {
        std::cout << "Ouch! Getting out done by Foreman? I honestly...didn't expect much better.\n\n";
        std::cout << "Anyway...you have\n\n";
        std::cout << "o                               \n";
        std::cout << "O                                \n";
        std::cout << "o                                \n";
        std::cout << "o                                \n";
        std::cout << "O       O   o  .oOo. O   o  .oOo \n";
        std::cout << "O       o   O  O   o o   O  `Ooo.\n";
        std::cout << "o     . O   o  o   O O   o      O\n";
        std::cout << "OOoOooO `OoO'o oOoO' `OoO'o `OoO'\n";
        std::cout << "               O                 \n";
        std::cout << "               o'\n";
    }


    std::cout << user_score;

}