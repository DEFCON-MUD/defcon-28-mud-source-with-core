inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 56, 6 }));
  set_short( "Hallway - x23y56z6" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y56z6.c",
  "south" : DIR+"/rooms/x23y55z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
