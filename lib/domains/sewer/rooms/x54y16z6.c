inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 16, 6 }));
  set_short( "Hallway - x54y16z6" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y16z6.c",
  "east" : DIR+"/rooms/x55y16z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
