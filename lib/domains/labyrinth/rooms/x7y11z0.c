inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 11, 0 }));
  set_short( "Corridor - x7y11z0" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y12z0.c",
  "south" : DIR+"/rooms/x7y10z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
