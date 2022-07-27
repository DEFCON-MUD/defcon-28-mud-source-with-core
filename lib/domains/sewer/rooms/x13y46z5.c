inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 46, 5 }));
  set_short( "Corridor - x13y46z5" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y46z5.c",
  "north" : DIR+"/rooms/x13y47z5.c",
  "south" : DIR+"/rooms/x13y45z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
