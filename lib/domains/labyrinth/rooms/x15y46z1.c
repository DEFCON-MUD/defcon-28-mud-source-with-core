inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 46, 1 }));
  set_short( "Hallway - x15y46z1" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y47z1.c",
  "south" : DIR+"/rooms/x15y45z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
