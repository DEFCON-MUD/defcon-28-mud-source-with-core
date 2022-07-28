inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 35, 7 }));
  set_short( "Corridor - x11y35z7" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y36z7.c",
  "south" : DIR+"/rooms/x11y34z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
