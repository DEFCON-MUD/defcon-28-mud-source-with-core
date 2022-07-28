inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 26, 7 }));
  set_short( "Hallway - x13y26z7" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y26z7.c",
  "north" : DIR+"/rooms/x13y27z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
