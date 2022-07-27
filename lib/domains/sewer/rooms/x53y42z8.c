inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 8 }));
  set_short( "Passage - x53y42z8" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y42z8.c",
  "south" : DIR+"/rooms/x53y41z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
