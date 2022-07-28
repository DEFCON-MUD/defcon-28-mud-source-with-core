inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 64, 2 }));
  set_short( "Hallway - x29y64z2" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y64z2.c",
  "east" : DIR+"/rooms/x30y64z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
