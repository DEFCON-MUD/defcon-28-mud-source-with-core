inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 12, 6 }));
  set_short( "Hallway - x19y12z6" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y13z6.c",
  "south" : DIR+"/rooms/x19y11z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
