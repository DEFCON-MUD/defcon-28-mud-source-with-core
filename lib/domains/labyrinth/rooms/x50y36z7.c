inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 36, 7 }));
  set_short( "Hallway - x50y36z7" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y36z7.c",
  "east" : DIR+"/rooms/x51y36z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
