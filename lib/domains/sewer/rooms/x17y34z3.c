inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 34, 3 }));
  set_short( "Passage - x17y34z3" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y35z3.c",
  "south" : DIR+"/rooms/x17y33z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
