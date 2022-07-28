inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 46, 5 }));
  set_short( "Hallway - x16y46z5" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y46z5.c",
  "east" : DIR+"/rooms/x17y46z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
