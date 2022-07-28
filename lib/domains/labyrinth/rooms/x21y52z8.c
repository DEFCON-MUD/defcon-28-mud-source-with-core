inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 52, 8 }));
  set_short( "Corridor - x21y52z8" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y52z8.c",
  "north" : DIR+"/rooms/x21y53z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
