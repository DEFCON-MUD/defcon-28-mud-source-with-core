inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 62, 6 }));
  set_short( "Passage - x33y62z6" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y62z6.c",
  "east" : DIR+"/rooms/x34y62z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
