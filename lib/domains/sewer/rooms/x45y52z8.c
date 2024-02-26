inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 52, 8 }));
  set_short( "Corridor - x45y52z8" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y52z8.c",
  "east" : DIR+"/rooms/x46y52z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
