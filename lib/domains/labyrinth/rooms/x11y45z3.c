inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 45, 3 }));
  set_short( "Corridor - x11y45z3" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y46z3.c",
  "south" : DIR+"/rooms/x11y44z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
