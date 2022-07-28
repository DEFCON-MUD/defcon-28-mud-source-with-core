inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 62, 4 }));
  set_short( "Hallway - x49y62z4" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y62z4.c",
  "east" : DIR+"/rooms/x50y62z4.c",
  "south" : DIR+"/rooms/x49y61z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
