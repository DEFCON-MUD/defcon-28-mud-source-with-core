inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 0, 2 }));
  set_short( "Hallway - x54y0z2" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y0z2.c",
  "east" : DIR+"/rooms/x55y0z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
