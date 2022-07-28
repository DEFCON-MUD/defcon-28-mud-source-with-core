inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 26, 1 }));
  set_short( "Corridor - x23y26z1" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y26z1.c",
  "north" : DIR+"/rooms/x23y27z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
