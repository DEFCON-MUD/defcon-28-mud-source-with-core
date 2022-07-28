inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 1 }));
  set_short( "Passage - x13y16z1" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y17z1.c",
  "south" : DIR+"/rooms/x13y15z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
