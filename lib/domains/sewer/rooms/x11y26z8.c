inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 26, 8 }));
  set_short( "Passage - x11y26z8" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y26z8.c",
  "east" : DIR+"/rooms/x12y26z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
