inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 29, 6 }));
  set_short( "Hallway - x17y29z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y30z6.c",
  "south" : DIR+"/rooms/x17y28z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
