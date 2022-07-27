inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 62, 8 }));
  set_short( "Passage - x49y62z8" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y62z8.c",
  "south" : DIR+"/rooms/x49y61z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
