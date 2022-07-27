inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 4 }));
  set_short( "Hallway - x17y50z4" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y51z4.c",
  "south" : DIR+"/rooms/x17y49z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
