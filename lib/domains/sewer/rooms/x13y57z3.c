inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 57, 3 }));
  set_short( "Hallway - x13y57z3" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y58z3.c",
  "south" : DIR+"/rooms/x13y56z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
