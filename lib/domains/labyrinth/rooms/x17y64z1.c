inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 64, 1 }));
  set_short( "Hallway - x17y64z1" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y64z1.c",
  "east" : DIR+"/rooms/x18y64z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
