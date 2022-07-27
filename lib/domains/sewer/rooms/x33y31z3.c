inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 31, 3 }));
  set_short( "Corridor - x33y31z3" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y32z3.c",
  "south" : DIR+"/rooms/x33y30z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
