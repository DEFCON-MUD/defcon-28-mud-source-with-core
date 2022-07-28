inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 14, 6 }));
  set_short( "Hallway - x22y14z6" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y14z6.c",
  "east" : DIR+"/rooms/x23y14z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
