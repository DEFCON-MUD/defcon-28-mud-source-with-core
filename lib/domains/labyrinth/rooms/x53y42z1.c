inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 1 }));
  set_short( "Corridor - x53y42z1" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y43z1.c",
  "south" : DIR+"/rooms/x53y41z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
