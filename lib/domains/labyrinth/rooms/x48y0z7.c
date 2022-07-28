inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 0, 7 }));
  set_short( "Corridor - x48y0z7" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y0z7.c",
  "east" : DIR+"/rooms/x49y0z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
