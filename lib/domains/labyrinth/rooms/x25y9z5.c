inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 9, 5 }));
  set_short( "Passage - x25y9z5" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y10z5.c",
  "south" : DIR+"/rooms/x25y8z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
