inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 7 }));
  set_short( "Passage - x47y48z7" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y48z7.c",
  "north" : DIR+"/rooms/x47y49z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
