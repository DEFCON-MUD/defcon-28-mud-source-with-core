inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 14, 9 }));
  set_short( "Passage - x4y14z9" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y14z9.c",
  "east" : DIR+"/rooms/x5y14z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
