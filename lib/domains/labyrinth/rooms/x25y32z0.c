inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 32, 0 }));
  set_short( "Corridor - x25y32z0" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y32z0.c",
  "north" : DIR+"/rooms/x25y33z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
