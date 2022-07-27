inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 50, 4 }));
  set_short( "Hallway - x58y50z4" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y50z4.c",
  "east" : DIR+"/rooms/x59y50z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
