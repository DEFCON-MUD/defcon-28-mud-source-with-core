inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 62, 4 }));
  set_short( "Hallway - x58y62z4" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y62z4.c",
  "east" : DIR+"/rooms/x59y62z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
