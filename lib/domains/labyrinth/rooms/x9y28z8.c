inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 28, 8 }));
  set_short( "Corridor - x9y28z8" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y28z8.c",
  "north" : DIR+"/rooms/x9y29z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
