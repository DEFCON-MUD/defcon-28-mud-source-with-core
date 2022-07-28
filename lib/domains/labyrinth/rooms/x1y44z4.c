inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 44, 4 }));
  set_short( "Passage - x1y44z4" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y44z4.c",
  "north" : DIR+"/rooms/x1y45z4.c",
  "south" : DIR+"/rooms/x1y43z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
