inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 11, 1 }));
  set_short( "Hallway - x49y11z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y12z1.c",
  "south" : DIR+"/rooms/x49y10z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
