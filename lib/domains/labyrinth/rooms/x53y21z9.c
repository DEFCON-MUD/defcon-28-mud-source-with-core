inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 21, 9 }));
  set_short( "Passage - x53y21z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y22z9.c",
  "south" : DIR+"/rooms/x53y20z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
