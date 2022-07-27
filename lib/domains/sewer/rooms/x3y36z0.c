inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 36, 0 }));
  set_short( "Corridor - x3y36z0" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y37z0.c",
  "south" : DIR+"/rooms/x3y35z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
