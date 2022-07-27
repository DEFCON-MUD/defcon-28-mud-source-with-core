inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 43, 8 }));
  set_short( "Hallway - x23y43z8" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y44z8.c",
  "south" : DIR+"/rooms/x23y42z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
