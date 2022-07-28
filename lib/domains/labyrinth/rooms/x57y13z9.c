inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 13, 9 }));
  set_short( "Hallway - x57y13z9" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y14z9.c",
  "south" : DIR+"/rooms/x57y12z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
