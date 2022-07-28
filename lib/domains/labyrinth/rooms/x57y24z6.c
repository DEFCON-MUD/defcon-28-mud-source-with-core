inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 24, 6 }));
  set_short( "Hallway - x57y24z6" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y24z6.c",
  "south" : DIR+"/rooms/x57y23z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
