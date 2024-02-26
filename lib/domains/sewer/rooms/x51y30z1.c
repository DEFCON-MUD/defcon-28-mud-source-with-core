inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 30, 1 }));
  set_short( "Hallway - x51y30z1" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y30z1.c",
  "south" : DIR+"/rooms/x51y29z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
