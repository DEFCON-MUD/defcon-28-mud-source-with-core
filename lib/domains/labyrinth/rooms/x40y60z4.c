inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 60, 4 }));
  set_short( "Passage - x40y60z4" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y60z4.c",
  "east" : DIR+"/rooms/x41y60z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
