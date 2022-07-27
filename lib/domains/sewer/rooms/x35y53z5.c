inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 53, 5 }));
  set_short( "Corridor - x35y53z5" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y54z5.c",
  "south" : DIR+"/rooms/x35y52z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
