inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 6, 7 }));
  set_short( "Hallway - x20y6z7" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y6z7.c",
  "east" : DIR+"/rooms/x21y6z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
