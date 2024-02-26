inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 62, 4 }));
  set_short( "Hallway - x41y62z4" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y62z4.c",
  "south" : DIR+"/rooms/x41y61z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
