inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 2 }));
  set_short( "Hallway - x29y40z2" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y40z2.c",
  "north" : DIR+"/rooms/x29y41z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
