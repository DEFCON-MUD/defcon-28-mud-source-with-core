inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 2 }));
  set_short( "Corridor - x5y42z2" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y42z2.c",
  "north" : DIR+"/rooms/x5y43z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
