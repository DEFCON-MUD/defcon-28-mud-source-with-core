inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 38, 6 }));
  set_short( "Passage - x29y38z6" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y38z6.c",
  "east" : DIR+"/rooms/x30y38z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
