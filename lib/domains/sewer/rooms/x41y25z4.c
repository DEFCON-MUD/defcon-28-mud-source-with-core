inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 25, 4 }));
  set_short( "Hallway - x41y25z4" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y26z4.c",
  "south" : DIR+"/rooms/x41y24z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
