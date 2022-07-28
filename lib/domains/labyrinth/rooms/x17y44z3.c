inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 3 }));
  set_short( "Passage - x17y44z3" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y44z3.c",
  "south" : DIR+"/rooms/x17y43z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
