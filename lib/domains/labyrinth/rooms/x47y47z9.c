inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 47, 9 }));
  set_short( "Passage - x47y47z9" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y48z9.c",
  "south" : DIR+"/rooms/x47y46z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
