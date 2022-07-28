inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 5, 2 }));
  set_short( "Hallway - x53y5z2" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y6z2.c",
  "south" : DIR+"/rooms/x53y4z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
