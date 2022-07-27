inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 9 }));
  set_short( "Corridor - x59y52z9" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y52z9.c",
  "south" : DIR+"/rooms/x59y51z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
