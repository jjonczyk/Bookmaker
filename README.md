Authors: Jakub Jonczyk & Michal Kita  
Project made: 31.01.2020  
Repository created: 27.03.2020  
---------------------------------  
  
This was our mini-project at the university during object-oriented programming classes.  
We were divided into 3 pairs and each one of them had to add some functionality to a betting shop simulator.  
It taught me to write clean code, focus on the SOLID rules of OOP and cooperate between teams.  
My team was responsible for organizing and simulating meetings/matches between created teams, then picking the winner.  
Of course, the draw had to be repeatable during one session - we provided the same results by implementing seed to our 'random' function.  
Next draw, another seed, and so on.  
  
The code:  
Meetings - container of Meeting classes  
Meeting - responsible for picking 2 rivals and revealing the winner  
Team - we decided to simulate individual competitions, so the team is just a player in our case  
Bookmaker - this is our main class. Given the number of matches and the seed, it was responsible for launching the simulation.  
