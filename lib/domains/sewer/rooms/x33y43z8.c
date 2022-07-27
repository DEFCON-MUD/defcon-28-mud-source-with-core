inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 43, 8 }));
  set_short( "Hallway - x33y43z8" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y44z8.c",
  "south" : DIR+"/rooms/x33y42z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
