inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 36, 6 }));
  set_short( "Hallway - x19y36z6" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y37z6.c",
  "south" : DIR+"/rooms/x19y35z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
