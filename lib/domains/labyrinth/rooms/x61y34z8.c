inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 34, 8 }));
  set_short( "Corridor - x61y34z8" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y34z8.c",
  "south" : DIR+"/rooms/x61y33z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
