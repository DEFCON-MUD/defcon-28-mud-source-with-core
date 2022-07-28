inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 24, 3 }));
  set_short( "Corridor - x55y24z3" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y24z3.c",
  "south" : DIR+"/rooms/x55y23z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
