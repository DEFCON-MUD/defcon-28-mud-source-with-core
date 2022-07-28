inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 30, 9 }));
  set_short( "Hallway - x22y30z9" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y30z9.c",
  "east" : DIR+"/rooms/x23y30z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
