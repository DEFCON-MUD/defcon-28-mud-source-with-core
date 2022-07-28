inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 11, 8 }));
  set_short( "Hallway - x35y11z8" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y12z8.c",
  "south" : DIR+"/rooms/x35y10z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
