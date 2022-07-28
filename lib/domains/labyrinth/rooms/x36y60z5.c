inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 60, 5 }));
  set_short( "Passage - x36y60z5" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y60z5.c",
  "east" : DIR+"/rooms/x37y60z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
