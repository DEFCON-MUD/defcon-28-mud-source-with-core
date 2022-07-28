inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 45, 1 }));
  set_short( "Corridor - x1y45z1" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y46z1.c",
  "south" : DIR+"/rooms/x1y44z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
