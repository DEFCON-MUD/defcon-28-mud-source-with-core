inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 53, 8 }));
  set_short( "Passage - x13y53z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y54z8.c",
  "south" : DIR+"/rooms/x13y52z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
