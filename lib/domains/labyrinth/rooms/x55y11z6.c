inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 11, 6 }));
  set_short( "Corridor - x55y11z6" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y12z6.c",
  "south" : DIR+"/rooms/x55y10z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
