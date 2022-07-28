inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 62, 1 }));
  set_short( "Hallway - x27y62z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y62z1.c",
  "east" : DIR+"/rooms/x28y62z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
