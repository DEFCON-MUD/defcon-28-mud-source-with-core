inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 11, 9 }));
  set_short( "Hallway - x37y11z9" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y12z9.c",
  "south" : DIR+"/rooms/x37y10z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
