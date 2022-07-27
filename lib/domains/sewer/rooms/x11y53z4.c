inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 53, 4 }));
  set_short( "Hallway - x11y53z4" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y54z4.c",
  "south" : DIR+"/rooms/x11y52z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
