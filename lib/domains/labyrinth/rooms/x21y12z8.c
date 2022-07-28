inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 8 }));
  set_short( "Corridor - x21y12z8" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y12z8.c",
  "south" : DIR+"/rooms/x21y11z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
