inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 48, 1 }));
  set_short( "Hallway - x59y48z1" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y48z1.c",
  "south" : DIR+"/rooms/x59y47z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
