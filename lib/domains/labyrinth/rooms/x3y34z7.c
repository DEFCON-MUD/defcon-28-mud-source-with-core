inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 34, 7 }));
  set_short( "Passage - x3y34z7" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y35z7.c",
  "south" : DIR+"/rooms/x3y33z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
