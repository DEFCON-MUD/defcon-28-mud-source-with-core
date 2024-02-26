inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 9 }));
  set_short( "Hallway - x23y4z9" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y4z9.c",
  "south" : DIR+"/rooms/x23y3z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
