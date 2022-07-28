inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 46, 4 }));
  set_short( "Corridor - x8y46z4" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y46z4.c",
  "east" : DIR+"/rooms/x9y46z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
