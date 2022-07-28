inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 36, 6 }));
  set_short( "Hallway - x60y36z6" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y36z6.c",
  "east" : DIR+"/rooms/x61y36z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
