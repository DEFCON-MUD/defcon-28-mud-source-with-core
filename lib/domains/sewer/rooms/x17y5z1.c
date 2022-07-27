inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 5, 1 }));
  set_short( "Corridor - x17y5z1" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y6z1.c",
  "south" : DIR+"/rooms/x17y4z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
