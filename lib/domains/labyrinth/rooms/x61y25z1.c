inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 25, 1 }));
  set_short( "Hallway - x61y25z1" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y26z1.c",
  "south" : DIR+"/rooms/x61y24z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
