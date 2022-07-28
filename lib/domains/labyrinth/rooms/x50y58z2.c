inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 58, 2 }));
  set_short( "Hallway - x50y58z2" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y58z2.c",
  "east" : DIR+"/rooms/x51y58z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
