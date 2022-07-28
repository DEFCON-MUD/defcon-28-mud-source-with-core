inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 0 }));
  set_short( "Corridor - x7y44z0" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y45z0.c",
  "south" : DIR+"/rooms/x7y43z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
