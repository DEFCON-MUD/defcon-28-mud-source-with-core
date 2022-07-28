inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 10, 7 }));
  set_short( "Passage - x7y10z7" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y10z7.c",
  "north" : DIR+"/rooms/x7y11z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
