inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 46, 4 }));
  set_short( "Corridor - x3y46z4" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y46z4.c",
  "north" : DIR+"/rooms/x3y47z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
