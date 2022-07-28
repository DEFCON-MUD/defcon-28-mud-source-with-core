inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 64, 9 }));
  set_short( "Hallway - x33y64z9" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y64z9.c",
  "east" : DIR+"/rooms/x34y64z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
