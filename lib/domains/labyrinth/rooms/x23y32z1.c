inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 32, 1 }));
  set_short( "Hallway - x23y32z1" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y32z1.c",
  "north" : DIR+"/rooms/x23y33z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
