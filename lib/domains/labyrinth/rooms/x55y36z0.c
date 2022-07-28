inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 36, 0 }));
  set_short( "Hallway - x55y36z0" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y36z0.c",
  "south" : DIR+"/rooms/x55y35z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
