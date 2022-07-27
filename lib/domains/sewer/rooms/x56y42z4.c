inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 42, 4 }));
  set_short( "Hallway - x56y42z4" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y42z4.c",
  "east" : DIR+"/rooms/x57y42z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
