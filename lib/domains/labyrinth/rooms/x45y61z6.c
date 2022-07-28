inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 61, 6 }));
  set_short( "Hallway - x45y61z6" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y62z6.c",
  "south" : DIR+"/rooms/x45y60z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
