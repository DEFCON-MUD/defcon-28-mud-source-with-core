inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 45, 5 }));
  set_short( "Corridor - x55y45z5" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y46z5.c",
  "south" : DIR+"/rooms/x55y44z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
