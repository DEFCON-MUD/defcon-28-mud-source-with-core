inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 7 }));
  set_short( "Corridor - x5y10z7" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y11z7.c",
  "south" : DIR+"/rooms/x5y9z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
