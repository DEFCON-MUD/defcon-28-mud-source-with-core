inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 9 }));
  set_short( "Passage - x53y8z9" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y8z9.c",
  "east" : DIR+"/rooms/x54y8z9.c",
  "north" : DIR+"/rooms/x53y9z9.c",
  "south" : DIR+"/rooms/x53y7z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
