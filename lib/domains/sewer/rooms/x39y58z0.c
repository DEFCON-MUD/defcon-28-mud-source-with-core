inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 58, 0 }));
  set_short( "Hallway - x39y58z0" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y58z0.c",
  "north" : DIR+"/rooms/x39y59z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
