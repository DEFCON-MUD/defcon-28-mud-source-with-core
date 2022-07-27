inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 4, 7 }));
  set_short( "Hallway - x39y4z7" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y5z7.c",
  "south" : DIR+"/rooms/x39y3z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
