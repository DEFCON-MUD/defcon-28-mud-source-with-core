inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 37, 7 }));
  set_short( "Hallway - x29y37z7" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y38z7.c",
  "south" : DIR+"/rooms/x29y36z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
