inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 61, 1 }));
  set_short( "Hallway - x19y61z1" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y62z1.c",
  "south" : DIR+"/rooms/x19y60z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
