inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 33, 2 }));
  set_short( "Hallway - x29y33z2" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y34z2.c",
  "south" : DIR+"/rooms/x29y32z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
