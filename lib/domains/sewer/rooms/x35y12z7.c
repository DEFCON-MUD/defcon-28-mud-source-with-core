inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 12, 7 }));
  set_short( "Corridor - x35y12z7" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y12z7.c",
  "north" : DIR+"/rooms/x35y13z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
