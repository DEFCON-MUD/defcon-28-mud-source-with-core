inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 14, 2 }));
  set_short( "Passage - x56y14z2" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y14z2.c",
  "east" : DIR+"/rooms/x57y14z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
