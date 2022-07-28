inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 10, 1 }));
  set_short( "Corridor - x61y10z1" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y10z1.c",
  "south" : DIR+"/rooms/x61y9z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
