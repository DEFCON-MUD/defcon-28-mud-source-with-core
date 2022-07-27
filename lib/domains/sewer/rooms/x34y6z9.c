inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 6, 9 }));
  set_short( "Hallway - x34y6z9" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y6z9.c",
  "east" : DIR+"/rooms/x35y6z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
