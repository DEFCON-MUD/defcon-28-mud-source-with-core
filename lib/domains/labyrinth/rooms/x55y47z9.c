inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 47, 9 }));
  set_short( "Passage - x55y47z9" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y48z9.c",
  "south" : DIR+"/rooms/x55y46z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
