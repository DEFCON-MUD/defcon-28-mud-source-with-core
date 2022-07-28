inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 22, 2 }));
  set_short( "Corridor - x41y22z2" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y22z2.c",
  "south" : DIR+"/rooms/x41y21z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
