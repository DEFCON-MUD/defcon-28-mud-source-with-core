inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 5 }));
  set_short( "Corridor - x59y16z5" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z5.c",
  "east" : DIR+"/rooms/x60y16z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
