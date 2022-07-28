inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 12, 3 }));
  set_short( "Corridor - x54y12z3" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y12z3.c",
  "east" : DIR+"/rooms/x55y12z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
