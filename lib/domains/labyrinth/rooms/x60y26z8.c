inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 26, 8 }));
  set_short( "Hallway - x60y26z8" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y26z8.c",
  "east" : DIR+"/rooms/x61y26z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
