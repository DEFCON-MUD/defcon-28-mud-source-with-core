inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 12, 8 }));
  set_short( "Passage - x31y12z8" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y12z8.c",
  "north" : DIR+"/rooms/x31y13z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
