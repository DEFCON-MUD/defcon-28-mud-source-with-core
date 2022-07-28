inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 26, 4 }));
  set_short( "Corridor - x1y26z4" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y27z4.c",
  "south" : DIR+"/rooms/x1y25z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
