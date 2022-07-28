inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 44, 5 }));
  set_short( "Corridor - x57y44z5" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y44z5.c",
  "north" : DIR+"/rooms/x57y45z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
