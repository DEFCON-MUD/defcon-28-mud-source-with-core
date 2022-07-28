inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 0, 2 }));
  set_short( "Passage - x23y0z2" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y0z2.c",
  "east" : DIR+"/rooms/x24y0z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
