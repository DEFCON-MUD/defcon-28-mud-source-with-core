inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 53, 4 }));
  set_short( "Hallway - x45y53z4" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y54z4.c",
  "south" : DIR+"/rooms/x45y52z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
