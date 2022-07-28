inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 22, 5 }));
  set_short( "Corridor - x48y22z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y22z5.c",
  "east" : DIR+"/rooms/x49y22z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
