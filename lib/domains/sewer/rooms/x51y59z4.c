inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 59, 4 }));
  set_short( "Passage - x51y59z4" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y60z4.c",
  "south" : DIR+"/rooms/x51y58z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
