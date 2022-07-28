inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 0, 6 }));
  set_short( "Hallway - x35y0z6" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y0z6.c",
  "east" : DIR+"/rooms/x36y0z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
