inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 35, 5 }));
  set_short( "Corridor - x61y35z5" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y36z5.c",
  "south" : DIR+"/rooms/x61y34z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
