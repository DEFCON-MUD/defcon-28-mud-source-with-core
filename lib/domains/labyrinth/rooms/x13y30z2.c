inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 30, 2 }));
  set_short( "Hallway - x13y30z2" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y30z2.c",
  "east" : DIR+"/rooms/x14y30z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
