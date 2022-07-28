inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 38, 8 }));
  set_short( "Hallway - x39y38z8" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y38z8.c",
  "south" : DIR+"/rooms/x39y37z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
