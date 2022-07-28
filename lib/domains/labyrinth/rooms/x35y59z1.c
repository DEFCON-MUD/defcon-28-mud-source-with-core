inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 59, 1 }));
  set_short( "Hallway - x35y59z1" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y60z1.c",
  "south" : DIR+"/rooms/x35y58z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
