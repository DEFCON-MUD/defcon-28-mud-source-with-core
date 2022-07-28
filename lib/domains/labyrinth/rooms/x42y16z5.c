inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 16, 5 }));
  set_short( "Corridor - x42y16z5" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y16z5.c",
  "east" : DIR+"/rooms/x43y16z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
