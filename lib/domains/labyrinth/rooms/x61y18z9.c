inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 18, 9 }));
  set_short( "Passage - x61y18z9" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y18z9.c",
  "north" : DIR+"/rooms/x61y19z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
