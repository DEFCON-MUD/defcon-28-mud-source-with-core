inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 35, 8 }));
  set_short( "Passage - x19y35z8" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y36z8.c",
  "south" : DIR+"/rooms/x19y34z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
