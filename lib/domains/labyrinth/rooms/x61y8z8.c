inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 8, 8 }));
  set_short( "Hallway - x61y8z8" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y9z8.c",
  "south" : DIR+"/rooms/x61y7z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
