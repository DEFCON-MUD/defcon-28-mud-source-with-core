inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 4, 0 }));
  set_short( "Hallway - x57y4z0" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y4z0.c",
  "east" : DIR+"/rooms/x58y4z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
