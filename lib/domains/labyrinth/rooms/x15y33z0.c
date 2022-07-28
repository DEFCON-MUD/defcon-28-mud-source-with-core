inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 33, 0 }));
  set_short( "Corridor - x15y33z0" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y34z0.c",
  "south" : DIR+"/rooms/x15y32z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
