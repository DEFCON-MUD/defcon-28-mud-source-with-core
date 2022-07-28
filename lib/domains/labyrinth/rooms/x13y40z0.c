inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 0 }));
  set_short( "Passage - x13y40z0" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y40z0.c",
  "east" : DIR+"/rooms/x14y40z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
