inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 16, 8 }));
  set_short( "Corridor - x51y16z8" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y16z8.c",
  "south" : DIR+"/rooms/x51y15z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
