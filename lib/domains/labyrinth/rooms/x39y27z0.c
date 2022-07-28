inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 27, 0 }));
  set_short( "Corridor - x39y27z0" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y28z0.c",
  "south" : DIR+"/rooms/x39y26z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
