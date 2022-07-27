inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 57, 2 }));
  set_short( "Corridor - x31y57z2" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y58z2.c",
  "south" : DIR+"/rooms/x31y56z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
