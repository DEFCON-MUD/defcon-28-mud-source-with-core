inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 2, 3 }));
  set_short( "Passage - x45y2z3" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y2z3.c",
  "east" : DIR+"/rooms/x46y2z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
