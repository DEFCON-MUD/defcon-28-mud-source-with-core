inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 9 }));
  set_short( "Corridor - x35y20z9" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y20z9.c",
  "south" : DIR+"/rooms/x35y19z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
