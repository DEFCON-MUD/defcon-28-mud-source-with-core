inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 12, 6 }));
  set_short( "Hallway - x38y12z6" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y12z6.c",
  "east" : DIR+"/rooms/x39y12z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
