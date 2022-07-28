inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 35, 4 }));
  set_short( "Hallway - x31y35z4" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y36z4.c",
  "south" : DIR+"/rooms/x31y34z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
