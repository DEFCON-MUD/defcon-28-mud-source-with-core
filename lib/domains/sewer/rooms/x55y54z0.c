inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 0 }));
  set_short( "Passage - x55y54z0" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y55z0.c",
  "south" : DIR+"/rooms/x55y53z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
