inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 18, 3 }));
  set_short( "Passage - x53y18z3" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y18z3.c",
  "south" : DIR+"/rooms/x53y17z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
