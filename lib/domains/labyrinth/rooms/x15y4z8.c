inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 4, 8 }));
  set_short( "Hallway - x15y4z8" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y4z8.c",
  "south" : DIR+"/rooms/x15y3z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
