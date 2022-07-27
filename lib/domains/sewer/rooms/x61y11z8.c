inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 11, 8 }));
  set_short( "Passage - x61y11z8" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y12z8.c",
  "south" : DIR+"/rooms/x61y10z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
