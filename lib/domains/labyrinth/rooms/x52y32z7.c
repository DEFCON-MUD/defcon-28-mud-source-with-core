inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 32, 7 }));
  set_short( "Corridor - x52y32z7" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y32z7.c",
  "east" : DIR+"/rooms/x53y32z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
