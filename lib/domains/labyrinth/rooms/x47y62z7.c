inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 7 }));
  set_short( "Corridor - x47y62z7" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y62z7.c",
  "south" : DIR+"/rooms/x47y61z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
