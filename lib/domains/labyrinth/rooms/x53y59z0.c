inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 59, 0 }));
  set_short( "Hallway - x53y59z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y60z0.c",
  "south" : DIR+"/rooms/x53y58z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
