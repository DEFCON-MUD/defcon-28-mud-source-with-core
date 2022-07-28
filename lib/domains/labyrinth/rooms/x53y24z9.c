inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 9 }));
  set_short( "Passage - x53y24z9" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y25z9.c",
  "south" : DIR+"/rooms/x53y23z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
