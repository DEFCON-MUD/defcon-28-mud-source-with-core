inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 62, 4 }));
  set_short( "Hallway - x44y62z4" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y62z4.c",
  "east" : DIR+"/rooms/x45y62z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
