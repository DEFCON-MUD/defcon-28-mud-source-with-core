inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 34, 7 }));
  set_short( "Passage - x44y34z7" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y34z7.c",
  "east" : DIR+"/rooms/x45y34z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
