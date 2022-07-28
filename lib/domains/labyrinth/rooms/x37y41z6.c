inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 41, 6 }));
  set_short( "Passage - x37y41z6" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y42z6.c",
  "south" : DIR+"/rooms/x37y40z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
