inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 62, 0 }));
  set_short( "Corridor - x37y62z0" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y62z0.c",
  "south" : DIR+"/rooms/x37y61z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
