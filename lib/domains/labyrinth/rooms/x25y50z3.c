inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 50, 3 }));
  set_short( "Hallway - x25y50z3" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y50z3.c",
  "north" : DIR+"/rooms/x25y51z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
