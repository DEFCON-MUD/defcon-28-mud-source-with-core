inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 27, 2 }));
  set_short( "Passage - x31y27z2" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y28z2.c",
  "south" : DIR+"/rooms/x31y26z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
