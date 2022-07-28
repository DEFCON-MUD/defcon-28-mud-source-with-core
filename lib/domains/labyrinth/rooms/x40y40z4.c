inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 40, 4 }));
  set_short( "Corridor - x40y40z4" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y40z4.c",
  "east" : DIR+"/rooms/x41y40z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
