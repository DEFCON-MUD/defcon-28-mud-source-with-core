inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 39, 6 }));
  set_short( "Hallway - x23y39z6" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y40z6.c",
  "south" : DIR+"/rooms/x23y38z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
