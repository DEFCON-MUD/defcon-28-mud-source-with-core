inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 5, 6 }));
  set_short( "Corridor - x29y5z6" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y6z6.c",
  "south" : DIR+"/rooms/x29y4z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
