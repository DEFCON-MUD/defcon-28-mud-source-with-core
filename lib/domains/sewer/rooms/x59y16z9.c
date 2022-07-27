inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 9 }));
  set_short( "Corridor - x59y16z9" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z9.c",
  "east" : DIR+"/rooms/x60y16z9.c",
  "north" : DIR+"/rooms/x59y17z9.c",
  "south" : DIR+"/rooms/x59y15z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
