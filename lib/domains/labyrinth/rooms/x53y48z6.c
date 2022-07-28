inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 48, 6 }));
  set_short( "Hallway - x53y48z6" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y48z6.c",
  "east" : DIR+"/rooms/x54y48z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
