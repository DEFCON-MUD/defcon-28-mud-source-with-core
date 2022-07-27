inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 5 }));
  set_short( "Hallway - x25y14z5" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y14z5.c",
  "south" : DIR+"/rooms/x25y13z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
