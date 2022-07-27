inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 34, 3 }));
  set_short( "Hallway - x59y34z3" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y34z3.c",
  "east" : DIR+"/rooms/x60y34z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
