inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 60, 1 }));
  set_short( "Passage - x19y60z1" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y60z1.c",
  "north" : DIR+"/rooms/x19y61z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
