inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 30, 8 }));
  set_short( "Hallway - x32y30z8" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y30z8.c",
  "east" : DIR+"/rooms/x33y30z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
