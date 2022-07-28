inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 22, 8 }));
  set_short( "Passage - x33y22z8" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y22z8.c",
  "north" : DIR+"/rooms/x33y23z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
