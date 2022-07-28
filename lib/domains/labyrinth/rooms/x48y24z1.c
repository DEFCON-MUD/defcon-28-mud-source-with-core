inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 24, 1 }));
  set_short( "Passage - x48y24z1" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y24z1.c",
  "east" : DIR+"/rooms/x49y24z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
