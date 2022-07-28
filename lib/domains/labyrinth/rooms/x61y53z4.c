inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 53, 4 }));
  set_short( "Hallway - x61y53z4" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y54z4.c",
  "south" : DIR+"/rooms/x61y52z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
