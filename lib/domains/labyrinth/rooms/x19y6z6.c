inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 6, 6 }));
  set_short( "Hallway - x19y6z6" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y6z6.c",
  "north" : DIR+"/rooms/x19y7z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
