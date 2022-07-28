inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 9, 1 }));
  set_short( "Passage - x15y9z1" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y10z1.c",
  "south" : DIR+"/rooms/x15y8z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
