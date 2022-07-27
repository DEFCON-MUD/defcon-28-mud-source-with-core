inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 27, 1 }));
  set_short( "Hallway - x37y27z1" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y28z1.c",
  "south" : DIR+"/rooms/x37y26z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
