inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 50, 5 }));
  set_short( "Passage - x27y50z5" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y50z5.c",
  "north" : DIR+"/rooms/x27y51z5.c",
  "south" : DIR+"/rooms/x27y49z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
