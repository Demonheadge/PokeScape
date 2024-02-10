	.align 2
voicegroup192::
	voice_keysplit_all voicegroup001  				//DRUMS
	voice_keysplit voicegroup005, KeySplitTable1 	//PIANO  (BRIGHT ACOUSTIC)
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 188, 128, 226  	// ELECTRIC PIANO 1
	voice_directsound 60, 65, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 128, 204, 77, 246 	// ELECTRIC PIANO 2
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204  
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216  		//TUBULAR BELLS
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_organ2, 255, 76, 133, 137  //PRECUSSIVE ORGAN  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0 
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 128, 249, 25, 76  	//NYLON STR GUITAR  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127 //OVERDRIVEN GUITAR
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 188   //FRETLESS BASS
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 115   //Synth bass 38 
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_harp, 255, 246, 0, 235		//HARP - orchestral strings?  
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 246, 0, 226  //TIMPANI 
	voice_keysplit voicegroup006, KeySplitTable2 				//STRINGS
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_keysplit voicegroup007, KeySplitTable3				//TRUMPET
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_keysplit voicegroup008, KeySplitTable4  				//TUBA
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_keysplit voicegroup009, KeySplitTable5 				//FRENCH HORNS
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127		//FLUTE  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127		//WHISTLE  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0 
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0    
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_3, 0, 7, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0  
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0

