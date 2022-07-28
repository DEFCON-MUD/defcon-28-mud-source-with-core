inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 24, 0 }));
  set_short( "Corridor - x3y24z0" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y24z0.c",
  "south" : DIR+"/rooms/x3y23z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
