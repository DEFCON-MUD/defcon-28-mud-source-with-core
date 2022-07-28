inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 21, 4 }));
  set_short( "Passage - x23y21z4" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y22z4.c",
  "south" : DIR+"/rooms/x23y20z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
