inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 5 }));
  set_short( "Hallway - x5y10z5" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y10z5.c",
  "south" : DIR+"/rooms/x5y9z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
