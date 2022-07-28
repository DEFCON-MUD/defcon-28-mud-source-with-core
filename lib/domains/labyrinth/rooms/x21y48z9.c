inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 48, 9 }));
  set_short( "Passage - x21y48z9" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y48z9.c",
  "south" : DIR+"/rooms/x21y47z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
