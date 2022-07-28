inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 22, 2 }));
  set_short( "Hallway - x21y22z2" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y23z2.c",
  "south" : DIR+"/rooms/x21y21z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
