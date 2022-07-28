inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 2 }));
  set_short( "Passage - x39y36z2" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y36z2.c",
  "north" : DIR+"/rooms/x39y37z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
