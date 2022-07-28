inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 50, 0 }));
  set_short( "Hallway - x42y50z0" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y50z0.c",
  "east" : DIR+"/rooms/x43y50z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
