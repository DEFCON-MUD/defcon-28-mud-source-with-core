inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 33, 7 }));
  set_short( "Passage - x33y33z7" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y34z7.c",
  "south" : DIR+"/rooms/x33y32z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
