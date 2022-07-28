inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 53, 4 }));
  set_short( "Corridor - x19y53z4" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y54z4.c",
  "south" : DIR+"/rooms/x19y52z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
