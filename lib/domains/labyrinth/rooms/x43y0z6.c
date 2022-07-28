inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 0, 6 }));
  set_short( "Hallway - x43y0z6" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y0z6.c",
  "east" : DIR+"/rooms/x44y0z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
