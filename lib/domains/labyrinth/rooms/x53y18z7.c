inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 18, 7 }));
  set_short( "Hallway - x53y18z7" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y19z7.c",
  "south" : DIR+"/rooms/x53y17z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
