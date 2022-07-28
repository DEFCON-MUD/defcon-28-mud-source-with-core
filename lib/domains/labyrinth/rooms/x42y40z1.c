inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 40, 1 }));
  set_short( "Hallway - x42y40z1" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y40z1.c",
  "east" : DIR+"/rooms/x43y40z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
