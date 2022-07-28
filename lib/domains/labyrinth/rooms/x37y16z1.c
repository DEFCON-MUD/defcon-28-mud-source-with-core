inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 1 }));
  set_short( "Passage - x37y16z1" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y16z1.c",
  "north" : DIR+"/rooms/x37y17z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
