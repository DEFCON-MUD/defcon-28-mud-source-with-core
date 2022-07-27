inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 56, 4 }));
  set_short( "Corridor - x42y56z4" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y56z4.c",
  "east" : DIR+"/rooms/x43y56z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
