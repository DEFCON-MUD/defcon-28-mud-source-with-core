inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 11, 5 }));
  set_short( "Corridor - x49y11z5" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y12z5.c",
  "south" : DIR+"/rooms/x49y10z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
