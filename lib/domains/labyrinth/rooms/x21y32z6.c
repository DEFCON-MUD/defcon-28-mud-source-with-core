inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 32, 6 }));
  set_short( "Corridor - x21y32z6" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y32z6.c",
  "east" : DIR+"/rooms/x22y32z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
