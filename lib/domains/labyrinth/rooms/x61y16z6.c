inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 6 }));
  set_short( "Corridor - x61y16z6" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y16z6.c",
  "south" : DIR+"/rooms/x61y15z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
