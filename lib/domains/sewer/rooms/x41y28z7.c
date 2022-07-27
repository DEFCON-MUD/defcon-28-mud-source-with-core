inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 7 }));
  set_short( "Passage - x41y28z7" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y28z7.c",
  "north" : DIR+"/rooms/x41y29z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
