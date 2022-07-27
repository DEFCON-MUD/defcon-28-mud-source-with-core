inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 37, 0 }));
  set_short( "Passage - x41y37z0" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y38z0.c",
  "south" : DIR+"/rooms/x41y36z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
