inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 50, 2 }));
  set_short( "Hallway - x7y50z2" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y50z2.c",
  "south" : DIR+"/rooms/x7y49z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
