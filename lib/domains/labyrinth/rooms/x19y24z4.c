inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 24, 4 }));
  set_short( "Hallway - x19y24z4" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y24z4.c",
  "south" : DIR+"/rooms/x19y23z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
