inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 7, 3 }));
  set_short( "Hallway - x15y7z3" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y8z3.c",
  "south" : DIR+"/rooms/x15y6z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
