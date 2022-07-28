inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 44, 4 }));
  set_short( "Corridor - x55y44z4" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y45z4.c",
  "south" : DIR+"/rooms/x55y43z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
