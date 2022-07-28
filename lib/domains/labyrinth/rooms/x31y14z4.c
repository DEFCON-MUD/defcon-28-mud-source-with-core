inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 14, 4 }));
  set_short( "Passage - x31y14z4" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y14z4.c",
  "east" : DIR+"/rooms/x32y14z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
