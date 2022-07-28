inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 30, 9 }));
  set_short( "Hallway - x53y30z9" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y30z9.c",
  "north" : DIR+"/rooms/x53y31z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
