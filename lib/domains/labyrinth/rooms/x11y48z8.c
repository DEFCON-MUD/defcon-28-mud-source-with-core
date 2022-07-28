inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 48, 8 }));
  set_short( "Hallway - x11y48z8" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y48z8.c",
  "east" : DIR+"/rooms/x12y48z8.c",
  "south" : DIR+"/rooms/x11y47z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
