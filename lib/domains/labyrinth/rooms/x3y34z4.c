inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 34, 4 }));
  set_short( "Passage - x3y34z4" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y34z4.c",
  "north" : DIR+"/rooms/x3y35z4.c",
  "south" : DIR+"/rooms/x3y33z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
