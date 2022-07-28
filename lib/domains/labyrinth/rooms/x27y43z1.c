inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 43, 1 }));
  set_short( "Hallway - x27y43z1" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y44z1.c",
  "south" : DIR+"/rooms/x27y42z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
