inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 31, 5 }));
  set_short( "Hallway - x17y31z5" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y32z5.c",
  "south" : DIR+"/rooms/x17y30z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
