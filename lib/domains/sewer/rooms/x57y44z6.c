inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 44, 6 }));
  set_short( "Corridor - x57y44z6" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y44z6.c",
  "north" : DIR+"/rooms/x57y45z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
