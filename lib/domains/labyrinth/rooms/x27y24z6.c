inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 24, 6 }));
  set_short( "Corridor - x27y24z6" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y24z6.c",
  "south" : DIR+"/rooms/x27y23z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
