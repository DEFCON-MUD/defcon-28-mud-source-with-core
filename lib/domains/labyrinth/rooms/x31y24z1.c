inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 24, 1 }));
  set_short( "Corridor - x31y24z1" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y25z1.c",
  "south" : DIR+"/rooms/x31y23z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
