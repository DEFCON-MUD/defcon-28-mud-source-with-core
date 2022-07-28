inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 36, 4 }));
  set_short( "Passage - x33y36z4" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y36z4.c",
  "south" : DIR+"/rooms/x33y35z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
