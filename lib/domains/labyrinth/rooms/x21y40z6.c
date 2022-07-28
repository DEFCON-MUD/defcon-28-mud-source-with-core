inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 40, 6 }));
  set_short( "Corridor - x21y40z6" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y40z6.c",
  "north" : DIR+"/rooms/x21y41z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
