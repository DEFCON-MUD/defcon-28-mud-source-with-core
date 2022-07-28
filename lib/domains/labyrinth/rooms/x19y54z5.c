inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 5 }));
  set_short( "Corridor - x19y54z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y54z5.c",
  "south" : DIR+"/rooms/x19y53z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
