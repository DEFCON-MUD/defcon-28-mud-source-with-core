inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 12, 5 }));
  set_short( "Corridor - x33y12z5" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y12z5.c",
  "south" : DIR+"/rooms/x33y11z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
