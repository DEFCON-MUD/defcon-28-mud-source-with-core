inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 36, 1 }));
  set_short( "Hallway - x55y36z1" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y36z1.c",
  "south" : DIR+"/rooms/x55y35z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
