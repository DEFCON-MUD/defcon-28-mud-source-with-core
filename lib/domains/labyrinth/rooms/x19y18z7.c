inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 18, 7 }));
  set_short( "Corridor - x19y18z7" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y18z7.c",
  "north" : DIR+"/rooms/x19y19z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
