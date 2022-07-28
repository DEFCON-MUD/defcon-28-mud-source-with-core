inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 34, 2 }));
  set_short( "Passage - x61y34z2" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y34z2.c",
  "south" : DIR+"/rooms/x61y33z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
