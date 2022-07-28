inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 8 }));
  set_short( "Corridor - x17y50z8" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y51z8.c",
  "south" : DIR+"/rooms/x17y49z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
