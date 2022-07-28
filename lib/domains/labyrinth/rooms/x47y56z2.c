inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 56, 2 }));
  set_short( "Hallway - x47y56z2" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y56z2.c",
  "north" : DIR+"/rooms/x47y57z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
