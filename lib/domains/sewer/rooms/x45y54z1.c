inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 54, 1 }));
  set_short( "Passage - x45y54z1" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y54z1.c",
  "south" : DIR+"/rooms/x45y53z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
