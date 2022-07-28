inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 52, 1 }));
  set_short( "Passage - x58y52z1" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y52z1.c",
  "east" : DIR+"/rooms/x59y52z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
