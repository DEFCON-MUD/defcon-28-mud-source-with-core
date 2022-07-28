inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 42, 7 }));
  set_short( "Corridor - x61y42z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y43z7.c",
  "south" : DIR+"/rooms/x61y41z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
