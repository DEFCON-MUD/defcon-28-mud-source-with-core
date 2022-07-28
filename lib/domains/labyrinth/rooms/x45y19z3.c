inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 19, 3 }));
  set_short( "Corridor - x45y19z3" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y20z3.c",
  "south" : DIR+"/rooms/x45y18z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
