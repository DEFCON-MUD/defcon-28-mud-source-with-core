inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 2, 1 }));
  set_short( "Passage - x40y2z1" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y2z1.c",
  "east" : DIR+"/rooms/x41y2z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
