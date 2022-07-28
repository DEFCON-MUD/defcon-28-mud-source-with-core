inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 27, 3 }));
  set_short( "Hallway - x61y27z3" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y28z3.c",
  "south" : DIR+"/rooms/x61y26z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
