inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 52, 4 }));
  set_short( "Hallway - x9y52z4" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y53z4.c",
  "south" : DIR+"/rooms/x9y51z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
