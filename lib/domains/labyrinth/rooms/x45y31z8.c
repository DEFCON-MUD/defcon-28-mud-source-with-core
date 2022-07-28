inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 31, 8 }));
  set_short( "Hallway - x45y31z8" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y32z8.c",
  "south" : DIR+"/rooms/x45y30z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
