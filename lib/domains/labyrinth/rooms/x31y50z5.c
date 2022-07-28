inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 50, 5 }));
  set_short( "Passage - x31y50z5" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y51z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
