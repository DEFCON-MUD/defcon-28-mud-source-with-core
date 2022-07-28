inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 58, 2 }));
  set_short( "Hallway - x49y58z2" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y58z2.c",
  "east" : DIR+"/rooms/x50y58z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
