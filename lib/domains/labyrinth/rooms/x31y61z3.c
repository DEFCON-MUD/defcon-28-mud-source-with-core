inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 61, 3 }));
  set_short( "Corridor - x31y61z3" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y62z3.c",
  "south" : DIR+"/rooms/x31y60z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
