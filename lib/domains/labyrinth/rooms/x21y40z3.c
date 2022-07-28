inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 40, 3 }));
  set_short( "Corridor - x21y40z3" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y41z3.c",
  "south" : DIR+"/rooms/x21y39z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
