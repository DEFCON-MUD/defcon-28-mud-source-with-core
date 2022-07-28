inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 6 }));
  set_short( "Passage - x41y10z6" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y10z6.c",
  "south" : DIR+"/rooms/x41y9z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
