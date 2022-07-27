inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 52, 4 }));
  set_short( "Passage - x11y52z4" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y52z4.c",
  "north" : DIR+"/rooms/x11y53z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
