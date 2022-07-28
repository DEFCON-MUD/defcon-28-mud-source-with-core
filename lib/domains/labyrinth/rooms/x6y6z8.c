inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 6, 8 }));
  set_short( "Hallway - x6y6z8" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y6z8.c",
  "east" : DIR+"/rooms/x7y6z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
