inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 43, 8 }));
  set_short( "Passage - x35y43z8" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y44z8.c",
  "south" : DIR+"/rooms/x35y42z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
