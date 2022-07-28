inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 26, 8 }));
  set_short( "Hallway - x9y26z8" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y26z8.c",
  "east" : DIR+"/rooms/x10y26z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
