inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 5, 6 }));
  set_short( "Hallway - x9y5z6" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y6z6.c",
  "south" : DIR+"/rooms/x9y4z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
