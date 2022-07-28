inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 45, 1 }));
  set_short( "Hallway - x13y45z1" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y46z1.c",
  "south" : DIR+"/rooms/x13y44z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
