inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 11, 6 }));
  set_short( "Corridor - x17y11z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y12z6.c",
  "south" : DIR+"/rooms/x17y10z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
