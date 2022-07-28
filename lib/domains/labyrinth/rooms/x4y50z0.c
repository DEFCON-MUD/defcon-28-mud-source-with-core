inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 50, 0 }));
  set_short( "Hallway - x4y50z0" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y50z0.c",
  "east" : DIR+"/rooms/x5y50z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
