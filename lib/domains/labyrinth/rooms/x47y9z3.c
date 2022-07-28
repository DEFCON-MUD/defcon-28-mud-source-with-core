inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 9, 3 }));
  set_short( "Corridor - x47y9z3" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y10z3.c",
  "south" : DIR+"/rooms/x47y8z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
