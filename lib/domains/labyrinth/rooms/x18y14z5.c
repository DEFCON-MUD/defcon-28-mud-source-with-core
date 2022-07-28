inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 14, 5 }));
  set_short( "Corridor - x18y14z5" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y14z5.c",
  "east" : DIR+"/rooms/x19y14z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
