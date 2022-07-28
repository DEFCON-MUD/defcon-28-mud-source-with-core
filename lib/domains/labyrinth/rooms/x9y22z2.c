inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 22, 2 }));
  set_short( "Corridor - x9y22z2" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y22z2.c",
  "north" : DIR+"/rooms/x9y23z2.c",
  "south" : DIR+"/rooms/x9y21z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
