inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 42, 8 }));
  set_short( "Corridor - x29y42z8" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y42z8.c",
  "south" : DIR+"/rooms/x29y41z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
