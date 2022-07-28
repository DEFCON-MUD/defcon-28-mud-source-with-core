inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 18, 9 }));
  set_short( "Passage - x36y18z9" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y18z9.c",
  "east" : DIR+"/rooms/x37y18z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
