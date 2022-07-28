inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 52, 6 }));
  set_short( "Hallway - x43y52z6" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y52z6.c",
  "south" : DIR+"/rooms/x43y51z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
