inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 54, 5 }));
  set_short( "Corridor - x13y54z5" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y54z5.c",
  "north" : DIR+"/rooms/x13y55z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
