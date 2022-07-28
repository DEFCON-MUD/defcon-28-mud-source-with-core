inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 16, 0 }));
  set_short( "Hallway - x16y16z0" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y16z0.c",
  "east" : DIR+"/rooms/x17y16z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
