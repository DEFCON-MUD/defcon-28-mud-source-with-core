inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 6 }));
  set_short( "Corridor - x1y10z6" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y10z6.c",
  "north" : DIR+"/rooms/x1y11z6.c",
  "south" : DIR+"/rooms/x1y9z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
