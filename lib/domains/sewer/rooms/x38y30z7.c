inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 30, 7 }));
  set_short( "Corridor - x38y30z7" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y30z7.c",
  "east" : DIR+"/rooms/x39y30z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
