inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 11, 1 }));
  set_short( "Hallway - x1y11z1" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y12z1.c",
  "south" : DIR+"/rooms/x1y10z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
