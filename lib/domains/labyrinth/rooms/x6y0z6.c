inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 0, 6 }));
  set_short( "Hallway - x6y0z6" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y0z6.c",
  "east" : DIR+"/rooms/x7y0z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
