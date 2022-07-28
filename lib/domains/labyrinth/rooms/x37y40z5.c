inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 40, 5 }));
  set_short( "Hallway - x37y40z5" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y40z5.c",
  "north" : DIR+"/rooms/x37y41z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
