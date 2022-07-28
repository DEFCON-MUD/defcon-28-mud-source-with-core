inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 2 }));
  set_short( "Hallway - x35y36z2" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y36z2.c",
  "south" : DIR+"/rooms/x35y35z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
