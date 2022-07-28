inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 20, 1 }));
  set_short( "Hallway - x41y20z1" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y20z1.c",
  "north" : DIR+"/rooms/x41y21z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
