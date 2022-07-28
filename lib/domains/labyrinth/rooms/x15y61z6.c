inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 61, 6 }));
  set_short( "Corridor - x15y61z6" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y62z6.c",
  "south" : DIR+"/rooms/x15y60z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
