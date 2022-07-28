inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 39, 8 }));
  set_short( "Hallway - x53y39z8" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y40z8.c",
  "south" : DIR+"/rooms/x53y38z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
