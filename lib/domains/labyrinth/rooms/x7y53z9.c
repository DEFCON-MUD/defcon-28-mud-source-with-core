inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 53, 9 }));
  set_short( "Hallway - x7y53z9" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y54z9.c",
  "south" : DIR+"/rooms/x7y52z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
