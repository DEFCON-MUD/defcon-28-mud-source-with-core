inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 5 }));
  set_short( "Corridor - x29y8z5" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y9z5.c",
  "south" : DIR+"/rooms/x29y7z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
