inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 14, 6 }));
  set_short( "Hallway - x11y14z6" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y15z6.c",
  "south" : DIR+"/rooms/x11y13z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
