inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 4, 9 }));
  set_short( "Passage - x43y4z9" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y4z9.c",
  "east" : DIR+"/rooms/x44y4z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
