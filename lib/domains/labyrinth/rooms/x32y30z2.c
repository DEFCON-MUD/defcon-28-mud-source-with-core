inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 30, 2 }));
  set_short( "Passage - x32y30z2" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y30z2.c",
  "east" : DIR+"/rooms/x33y30z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
