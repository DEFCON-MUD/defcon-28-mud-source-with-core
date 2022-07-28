inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 27, 0 }));
  set_short( "Hallway - x53y27z0" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y28z0.c",
  "south" : DIR+"/rooms/x53y26z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
