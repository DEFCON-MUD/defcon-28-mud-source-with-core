inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 52, 7 }));
  set_short( "Hallway - x41y52z7" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y52z7.c",
  "south" : DIR+"/rooms/x41y51z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
