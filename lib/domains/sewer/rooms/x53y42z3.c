inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 3 }));
  set_short( "Corridor - x53y42z3" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y42z3.c",
  "south" : DIR+"/rooms/x53y41z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
