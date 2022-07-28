inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 10, 4 }));
  set_short( "Passage - x57y10z4" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y11z4.c",
  "south" : DIR+"/rooms/x57y9z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
