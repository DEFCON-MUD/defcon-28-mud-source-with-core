inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 56, 4 }));
  set_short( "Hallway - x39y56z4" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y56z4.c",
  "south" : DIR+"/rooms/x39y55z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
