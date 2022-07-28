inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 60, 6 }));
  set_short( "Hallway - x3y60z6" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y60z6.c",
  "east" : DIR+"/rooms/x4y60z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
