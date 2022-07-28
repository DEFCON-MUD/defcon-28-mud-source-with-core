inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 36, 8 }));
  set_short( "Passage - x58y36z8" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y36z8.c",
  "east" : DIR+"/rooms/x59y36z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
