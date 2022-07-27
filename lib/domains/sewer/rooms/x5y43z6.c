inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 43, 6 }));
  set_short( "Corridor - x5y43z6" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y44z6.c",
  "south" : DIR+"/rooms/x5y42z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
