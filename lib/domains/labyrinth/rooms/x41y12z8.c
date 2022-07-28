inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 12, 8 }));
  set_short( "Corridor - x41y12z8" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y12z8.c",
  "north" : DIR+"/rooms/x41y13z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
