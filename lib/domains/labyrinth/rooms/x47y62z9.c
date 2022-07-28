inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 9 }));
  set_short( "Passage - x47y62z9" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y62z9.c",
  "south" : DIR+"/rooms/x47y61z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
