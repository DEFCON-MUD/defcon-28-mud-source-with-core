inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 10, 4 }));
  set_short( "Corridor - x17y10z4" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y10z4.c",
  "south" : DIR+"/rooms/x17y9z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
