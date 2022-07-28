inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 53, 4 }));
  set_short( "Corridor - x43y53z4" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y54z4.c",
  "south" : DIR+"/rooms/x43y52z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
