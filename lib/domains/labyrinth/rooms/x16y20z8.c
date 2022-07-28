inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 20, 8 }));
  set_short( "Hallway - x16y20z8" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y20z8.c",
  "east" : DIR+"/rooms/x17y20z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
