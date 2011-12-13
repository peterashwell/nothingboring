#ifndef GENETICBOT_H
#define GENETICBOT_H


#include <string>
#include <fstream>

#include "Genome.h"
#include "utils/State.h"
#include "utils/AntManager.h"
#include "utils/LocalData.h"
#include "genes/Gene.h"

/*
	This struct represents your bot in the game of Ants
*/
class GeneticBot
{
	private:
		State state;
		AntManager antmgr;	// interprets genes and makes moves
		LocalData local_data;
		Genome genome;
		float time_marker;	// marks times for logTime

	public: 
		GeneticBot();
				
		void playGame(string filename);	//plays a single game of Ants
		
		void endTurn();		//indicates to the engine that it has made its moves

		void logTime(string message); // logs time elapsed with a message
		
		void loadGene(string filename);
};

#endif
