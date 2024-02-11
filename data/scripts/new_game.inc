EventScript_ResetAllBerries:: @ 827149Df

	@ Route 102
	setberrytree BERRY_TREE_ROUTE_102_PECHA, ITEM_TO_BERRY(ITEM_PECHA_BERRY), BERRY_STAGE_BERRIES

	@ YANILLE
	setberrytree BERRY_TREE_YANILLE_JANGERBERRY, ITEM_TO_BERRY(ITEM_PECHA_BERRY), BERRY_STAGE_BERRIES
	
	@ how to set berry trees
	@setberrytree 2, ITEM_TO_BERRY(ITEM_ORAN_BERRY), BERRY_STAGE_BERRIES
	return

EventScript_ResetAllMapFlags:: @ 82715DE
	setflag FLAG_EVILCHICKEN_HIDE 
	call EventScript_ResetAllBerries
	end
