inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 9 }));
  set_short( "Hallway - x51y36z9" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y36z9.c",
  "north" : DIR+"/rooms/x51y37z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
