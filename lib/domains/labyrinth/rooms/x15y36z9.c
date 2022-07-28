inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 36, 9 }));
  set_short( "Passage - x15y36z9" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y36z9.c",
  "south" : DIR+"/rooms/x15y35z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
