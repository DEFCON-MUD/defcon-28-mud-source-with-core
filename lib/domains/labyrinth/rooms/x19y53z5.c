inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 53, 5 }));
  set_short( "Passage - x19y53z5" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y54z5.c",
  "south" : DIR+"/rooms/x19y52z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
