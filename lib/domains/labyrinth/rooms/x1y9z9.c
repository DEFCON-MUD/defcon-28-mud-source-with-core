inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 9, 9 }));
  set_short( "Corridor - x1y9z9" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y10z9.c",
  "south" : DIR+"/rooms/x1y8z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
