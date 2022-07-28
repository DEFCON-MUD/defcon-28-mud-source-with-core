inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 18, 2 }));
  set_short( "Passage - x46y18z2" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y18z2.c",
  "east" : DIR+"/rooms/x47y18z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
