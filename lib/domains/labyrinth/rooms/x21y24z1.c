inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 24, 1 }));
  set_short( "Hallway - x21y24z1" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y24z1.c",
  "north" : DIR+"/rooms/x21y25z1.c",
  "south" : DIR+"/rooms/x21y23z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
