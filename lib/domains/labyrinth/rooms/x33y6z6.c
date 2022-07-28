inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 6, 6 }));
  set_short( "Passage - x33y6z6" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y6z6.c",
  "south" : DIR+"/rooms/x33y5z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
