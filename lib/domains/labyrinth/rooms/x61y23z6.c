inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 23, 6 }));
  set_short( "Corridor - x61y23z6" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y24z6.c",
  "south" : DIR+"/rooms/x61y22z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
