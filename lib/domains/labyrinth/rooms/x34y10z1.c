inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 10, 1 }));
  set_short( "Hallway - x34y10z1" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y10z1.c",
  "east" : DIR+"/rooms/x35y10z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
