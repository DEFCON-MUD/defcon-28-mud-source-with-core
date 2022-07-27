inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 62, 2 }));
  set_short( "Passage - x11y62z2" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y62z2.c",
  "south" : DIR+"/rooms/x11y61z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
