inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 64, 9 }));
  set_short( "Passage - x17y64z9" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y64z9.c",
  "east" : DIR+"/rooms/x18y64z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
