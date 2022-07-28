inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 15, 4 }));
  set_short( "Corridor - x25y15z4" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y16z4.c",
  "south" : DIR+"/rooms/x25y14z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
