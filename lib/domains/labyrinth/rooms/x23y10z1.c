inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 1 }));
  set_short( "Corridor - x23y10z1" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y10z1.c",
  "south" : DIR+"/rooms/x23y9z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
