inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 7 }));
  set_short( "Hallway - x21y12z7" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y12z7.c",
  "north" : DIR+"/rooms/x21y13z7.c",
  "south" : DIR+"/rooms/x21y11z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
