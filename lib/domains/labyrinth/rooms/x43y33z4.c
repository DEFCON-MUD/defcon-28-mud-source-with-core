inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 33, 4 }));
  set_short( "Corridor - x43y33z4" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y34z4.c",
  "south" : DIR+"/rooms/x43y32z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
