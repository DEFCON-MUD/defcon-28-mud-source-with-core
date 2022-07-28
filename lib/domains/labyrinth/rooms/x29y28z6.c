inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 6 }));
  set_short( "Passage - x29y28z6" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y28z6.c",
  "south" : DIR+"/rooms/x29y27z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
