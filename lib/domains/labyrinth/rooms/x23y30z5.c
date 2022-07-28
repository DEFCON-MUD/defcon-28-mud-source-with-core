inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 30, 5 }));
  set_short( "Hallway - x23y30z5" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y30z5.c",
  "east" : DIR+"/rooms/x24y30z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
