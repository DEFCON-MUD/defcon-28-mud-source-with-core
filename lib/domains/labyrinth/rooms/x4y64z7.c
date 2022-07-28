inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 64, 7 }));
  set_short( "Passage - x4y64z7" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y64z7.c",
  "east" : DIR+"/rooms/x5y64z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
