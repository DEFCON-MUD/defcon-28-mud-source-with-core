inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 10, 6 }));
  set_short( "Corridor - x39y10z6" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y10z6.c",
  "north" : DIR+"/rooms/x39y11z6.c",
  "south" : DIR+"/rooms/x39y9z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
