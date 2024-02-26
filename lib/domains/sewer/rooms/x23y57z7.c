inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 57, 7 }));
  set_short( "Hallway - x23y57z7" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y58z7.c",
  "south" : DIR+"/rooms/x23y56z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
