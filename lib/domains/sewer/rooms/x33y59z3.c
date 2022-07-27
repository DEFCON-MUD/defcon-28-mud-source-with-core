inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 59, 3 }));
  set_short( "Hallway - x33y59z3" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y60z3.c",
  "south" : DIR+"/rooms/x33y58z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
