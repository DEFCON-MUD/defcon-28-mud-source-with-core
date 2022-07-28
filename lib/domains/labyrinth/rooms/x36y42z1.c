inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 42, 1 }));
  set_short( "Passage - x36y42z1" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y42z1.c",
  "east" : DIR+"/rooms/x37y42z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
