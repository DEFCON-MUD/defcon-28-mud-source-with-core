inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 10, 9 }));
  set_short( "Hallway - x12y10z9" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y10z9.c",
  "east" : DIR+"/rooms/x13y10z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
