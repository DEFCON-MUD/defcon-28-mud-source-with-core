inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 64, 9 }));
  set_short( "Hallway - x37y64z9" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y64z9.c",
  "east" : DIR+"/rooms/x38y64z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
