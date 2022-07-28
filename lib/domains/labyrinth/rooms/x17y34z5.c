inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 34, 5 }));
  set_short( "Hallway - x17y34z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y34z5.c",
  "south" : DIR+"/rooms/x17y33z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
