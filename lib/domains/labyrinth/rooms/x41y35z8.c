inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 35, 8 }));
  set_short( "Hallway - x41y35z8" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y36z8.c",
  "south" : DIR+"/rooms/x41y34z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
