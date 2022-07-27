inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 9, 9 }));
  set_short( "Passage - x51y9z9" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y10z9.c",
  "south" : DIR+"/rooms/x51y8z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
