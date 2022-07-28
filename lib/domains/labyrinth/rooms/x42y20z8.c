inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 20, 8 }));
  set_short( "Corridor - x42y20z8" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y20z8.c",
  "east" : DIR+"/rooms/x43y20z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
