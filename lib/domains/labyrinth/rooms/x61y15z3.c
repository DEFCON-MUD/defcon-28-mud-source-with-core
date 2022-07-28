inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 15, 3 }));
  set_short( "Hallway - x61y15z3" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y16z3.c",
  "south" : DIR+"/rooms/x61y14z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
