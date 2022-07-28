inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 7 }));
  set_short( "Passage - x45y10z7" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y10z7.c",
  "north" : DIR+"/rooms/x45y11z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
