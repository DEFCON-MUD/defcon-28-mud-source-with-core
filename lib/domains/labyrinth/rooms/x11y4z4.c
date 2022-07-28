inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 4 }));
  set_short( "Passage - x11y4z4" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y4z4.c",
  "north" : DIR+"/rooms/x11y5z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
