inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 34, 8 }));
  set_short( "Passage - x45y34z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y34z8.c",
  "south" : DIR+"/rooms/x45y33z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
