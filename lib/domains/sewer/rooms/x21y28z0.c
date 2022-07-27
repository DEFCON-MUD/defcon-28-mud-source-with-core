inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 28, 0 }));
  set_short( "Passage - x21y28z0" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y28z0.c",
  "south" : DIR+"/rooms/x21y27z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
