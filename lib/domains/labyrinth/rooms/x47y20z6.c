inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 20, 6 }));
  set_short( "Passage - x47y20z6" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y20z6.c",
  "south" : DIR+"/rooms/x47y19z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
