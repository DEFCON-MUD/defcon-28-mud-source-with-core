inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 32, 9 }));
  set_short( "Hallway - x50y32z9" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y32z9.c",
  "east" : DIR+"/rooms/x51y32z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
