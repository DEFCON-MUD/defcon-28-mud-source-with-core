inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 17, 3 }));
  set_short( "Passage - x47y17z3" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y18z3.c",
  "south" : DIR+"/rooms/x47y16z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
