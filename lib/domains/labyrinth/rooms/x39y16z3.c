inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 16, 3 }));
  set_short( "Corridor - x39y16z3" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y17z3.c",
  "south" : DIR+"/rooms/x39y15z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
