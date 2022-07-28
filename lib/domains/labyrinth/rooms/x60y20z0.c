inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 20, 0 }));
  set_short( "Corridor - x60y20z0" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y20z0.c",
  "east" : DIR+"/rooms/x61y20z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
