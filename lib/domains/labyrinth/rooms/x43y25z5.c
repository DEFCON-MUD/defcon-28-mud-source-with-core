inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 25, 5 }));
  set_short( "Corridor - x43y25z5" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y26z5.c",
  "south" : DIR+"/rooms/x43y24z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
